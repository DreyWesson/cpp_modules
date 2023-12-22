#include <iostream>
#include <limits>

#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#include <cctype>
#include <cstdlib>
#include <climits>
#include <cmath>

enum Type
{
    INVALID,
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    PSEUDO,
};
struct values {
    char charVal;
    int intVal;
    float floatVal;
    double doubleVal;
    bool validChar;
};

class ScalarConverter {
	private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(ScalarConverter const &cpy);

		ScalarConverter &operator=(ScalarConverter const &src);

    public:
        static void convert(std::string const &str);
};
void handleInteger(int intValue);
void handleFloat(float floatVal);
int checkType(std::string s);
void handleInfs(std::string str);
void handleChar(char charVal);
void handleDouble(double doubleVal);
void printResult(values val);
// void printResult(char charVal, bool validChar, int intVal, float floatVal, double doubleVal);
bool isPseudo(std::string s);

#endif
