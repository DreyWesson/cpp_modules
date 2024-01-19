#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <limits>

class BitcoinConverter {
public:
    BitcoinConverter(const std::string& dbFile) {
        loadDatabase(dbFile);
    }

    void convertValues(const std::string& inputFile) {
        std::ifstream input(inputFile.c_str());
        if (!input.is_open()) {
            std::cerr << "Error: could not open file.\n";
            return;
        }

        std::string line;
        while (std::getline(input, line)) {
            if (line.empty() || line.find('|') == std::string::npos) {
                std::cerr << "Error: bad input => " << line << '\n';
                continue;
            }

            std::istringstream iss(line);
            std::string dateStr, valueStr;
            std::getline(iss, dateStr, '|');
            std::getline(iss, valueStr, '|');

            try {
                double value = strtod(valueStr.c_str(), 0);
                if (value < 0) {
                    std::cerr << "Error: not a positive number.\n";
                    continue;
                }

                std::string closestDate = findClosestDate(dateStr);
                if (closestDate.empty()) {
                    std::cerr << "Error: no valid date found.\n";
                    continue;
                }

                double exchangeRate = getExchangeRate(closestDate);
                std::cout << dateStr << " => " << value << " = " << std::fixed << std::setprecision(2)
                          << (value * exchangeRate) << '\n';
            } catch (const std::invalid_argument&) {
                std::cerr << "Error: not a number.\n";
            } catch (const std::out_of_range&) {
                std::cerr << "Error: too large a number.\n";
            }
        }
    }

private:
    std::map<std::string, double> bitcoinDatabase;

    void loadDatabase(const std::string& dbFile) {
        std::ifstream db(dbFile.c_str());
        if (!db.is_open()) {
            std::cerr << "Error: could not open database file.\n";
            std::exit(EXIT_FAILURE);
        }

        std::string line;
        while (std::getline(db, line)) {
            if (line.empty() || line.find(',') == std::string::npos) {
                std::cerr << "Error: invalid database format.\n";
                std::exit(EXIT_FAILURE);
            }

            std::istringstream iss(line);
            std::string dateStr, rateStr;
            std::getline(iss, dateStr, ',');
            std::getline(iss, rateStr, ',');

            try {
                double rate = strtod(rateStr.c_str(), 0);
                if (rate < 0) {
                    std::cerr << "Error: negative rate in database.\n";
                    std::exit(EXIT_FAILURE);
                }

                bitcoinDatabase[dateStr] = rate;
            } catch (const std::invalid_argument&) {
                std::cerr << "Error: invalid rate in database.\n";
                std::exit(EXIT_FAILURE);
            } catch (const std::out_of_range&) {
                std::cerr << "Error: rate value too large.\n";
                std::exit(EXIT_FAILURE);
            }
        }
    }

    std::string findClosestDate(const std::string& targetDate) const {
        std::string closestDate;
        double minDifference = HUGE_VAL;

        for (std::map<std::string, double>::const_iterator it = bitcoinDatabase.begin(); it != bitcoinDatabase.end(); ++it) {
            const std::string& currentDate = it->first;
            double difference = std::abs(strtod(currentDate.c_str(), 0) - strtod(targetDate.c_str(), 0));

            if (difference < minDifference) {
                closestDate = currentDate;
                minDifference = difference;
            }
        }

        return closestDate;
    }

    double getExchangeRate(const std::string& date) const {
        return bitcoinDatabase.find(date)->second;
    }
};

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file>\n";
        return EXIT_FAILURE;
    }

    const std::string inputFileName = argv[1];
    const std::string databaseFileName = "data.csv";

    BitcoinConverter converter(databaseFileName);
    converter.convertValues(inputFileName);

    return EXIT_SUCCESS;
}
