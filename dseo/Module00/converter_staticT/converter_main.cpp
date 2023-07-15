#include "case_converter.h"
#include <iostream>

int main() {
    std::string str = "Hello, World!";

    std::cout << "=== Using static functions ===" << std::endl;
    std::string upperStrStatic = CaseConverter::toUpperCaseStatic(str);
    std::string lowerStrStatic = CaseConverter::toLowerCaseStatic(str);

    std::cout << "Original String: " << str << std::endl;
    std::cout << "Uppercased String (Static): " << upperStrStatic << std::endl;
    std::cout << "Lowercased String (Static): " << lowerStrStatic << std::endl;

    std::cout << "=== Using member functions ===" << std::endl;
    CaseConverter converter(str);
    std::string upperStrMember = converter.toUpperCase();
    std::string lowerStrMember = converter.toLowerCase();

    std::cout << "Original String: " << str << std::endl;
    std::cout << "Uppercased String (Member): " << upperStrMember << std::endl;
    std::cout << "Lowercased String (Member): " << lowerStrMember << std::endl;

    return 0;
}
