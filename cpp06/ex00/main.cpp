#include "./inc/ScalarConverter.hpp"

int main( int ac, char ** av )
{
    if ( ac != 2 )
        return (std::cout << "Usage: ./convert <value> \n", 1);
    
    std::string str(av[1]);
    ScalarConverter::convert(str);
    return (0);
}
