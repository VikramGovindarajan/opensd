#ifndef OPENSD_STRING_UTILS_H
#define OPENSD_STRING_UTILS_H

#include <string>

// #include "opensd/vector.h"

namespace opensd {

std::string& strtrim(std::string& s);

char* strtrim(char* c_str);

std::string to_element(const std::string& name);

void to_lower(std::string& str);

int word_count(std::string const& str);

// vector<std::string> split(const std::string& in);

bool ends_with(const std::string& value, const std::string& ending);

bool starts_with(const std::string& value, const std::string& beginning);

} // namespace opensd
#endif // OPENSD_STRING_UTILS_H
