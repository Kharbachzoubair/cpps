#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& src) {
    (void)src;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs) {
    (void)rhs;
    return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(const std::string& str) {
    double val;
    char *endptr;

    if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0])) {
        val = static_cast<double>(str[0]);
    }
    else {
        val = std::strtod(str.c_str(), &endptr);
        if (*endptr != '\0' && std::string(endptr) != "f"  ) {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: nanf" << std::endl;
            std::cout << "double: nan" << std::endl;
            return;
        }
    }

    std::cout << std::fixed << std::setprecision(1);

    std::cout << "char: ";
    if (std::isnan(val) || std::isinf(val) || val < 0 || val > 127) {
        std::cout << "impossible" << std::endl;
    } else if (!std::isprint(static_cast<int>(val))) {
        std::cout << "Non displayable" << std::endl;
    } else {
        std::cout << "'" << static_cast<char>(val) << "'" << std::endl;
    }

    std::cout << "int: ";
    if (std::isnan(val) || std::isinf(val) || val < INT_MIN || val > INT_MAX) {
        std::cout << "impossible" << std::endl;
    } else {
        std::cout << static_cast<int>(val) << std::endl;
    }

    std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(val) << std::endl;
}