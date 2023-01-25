// Copyright (c) 2022 Usitha Indeewara. All Rights Reserved.

#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include <random>

using str = std::string;

struct response {
    std::vector<str> i;
    std::vector<str> o;
};

bool is_include(str string, str substring);

str rdm(std::vector<str> arr);