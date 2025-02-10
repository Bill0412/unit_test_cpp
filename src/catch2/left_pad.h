#pragma once

#include <string>

std::string left_pad(std::string const& str, size_t min_len, char pad_char = ' ') {
    if (str.size() >= min_len) {
        return str;
    } else {
        return std::string(min_len - str.size(), pad_char) + str;
    }
}
