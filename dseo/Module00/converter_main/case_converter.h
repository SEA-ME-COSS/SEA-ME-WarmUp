#ifndef CASE_CONVERTER_H
#define CASE_CONVERTER_H
#include <string>

class CaseConverter {
public:
    static std::string toUpperCase(const std::string& str);
    static std::string toLowerCase(const std::string& str);
};

#endif  // CASE_CONVERTER_H
