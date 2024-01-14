#include <iostream>
#include <fstream>
#include <vector>
#include "./inc/Span.hpp"

int main() {
    std::ifstream file("test_numbers.txt");
    std::vector<int> testNumbers;
    int num;

    while (file >> num) {
        testNumbers.push_back(num);
    }

    Span mySpan(110000);
    mySpan.addRange(testNumbers.begin(), testNumbers.end());

    try {
        int shortest = mySpan.shortestSpan();
        int longest = mySpan.longestSpan();

        std::cout << "Shortest Span: " << shortest << std::endl;
        std::cout << "Longest Span: " << longest << std::endl;
    } catch (const Span::MaxSizeException& e) {
        std::cerr << "Caught MaxSizeException: " << e.what() << std::endl;
    }  catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
