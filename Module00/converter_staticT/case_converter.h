#ifndef CASE_CONVERTER_H
#define CASE_CONVERTER_H
#include <string>

class CaseConverter {
public:
    static std::string toUpperCaseStatic(const std::string& str);
    static std::string toLowerCaseStatic(const std::string& str);

    CaseConverter(const std::string& str);
    std::string toUpperCase();
    std::string toLowerCase();

private:
    std::string originalString;
};

#endif  // CASE_CONVERTER_H
