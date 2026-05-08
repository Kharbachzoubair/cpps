#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if(ac<2)
    {
        std::cout << "Error: Usage ./convert <literal>" << std::endl;
        return 1;
    }
    else{
        ScalarConverter::convert(av[1]);
    }
}