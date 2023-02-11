// Copyright (c) 2023 Usitha Indeewara. All Rights Reserved.

#include "funcs.h"

bool is_include(str string, str substring) {
    std::transform(string.begin(), string.end(), string.begin(), tolower);
    std::transform(substring.begin(), substring.end(), substring.begin(), tolower);

    if(string.find(substring) != str::npos) {
        return true;
    }

    return false;
}


str rdm(std::vector<str> arr) {
    std::random_device rd;
    std::mt19937 generator(rd());

    std::shuffle(arr.begin(), arr.end(), generator);
    return arr.front();
}