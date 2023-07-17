#include "case_converter.h"
#include <algorithm>

std::string CaseConverter::toUpperCaseStatic(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

std::string CaseConverter::toLowerCaseStatic(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

CaseConverter::CaseConverter(const std::string& str) : originalString(str) {}

/*
CaseConverter::CaseConverter(const std::string& str) {
    originalString = str;
}
*/


std::string CaseConverter::toUpperCase() {
    std::string result = originalString;
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

std::string CaseConverter::toLowerCase() {
    std::string result = originalString;
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}
