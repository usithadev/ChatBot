// Copyright (c) 2022 Usitha Indeewara. All Rights Reserved.

#include "main.h"

data_t data = {
    {
        {"hello", "hi", "hey"},
        {"Hi! Nice to meet you!", "Hello!"}
    },
    {
        {"bye", "see ya"},
        {"See you later!", "Good Bye"}
    }
};

str chatbot(str inp) {
    str result = rdm(std::vector<str>{"Sorry I didn't understand!", "Hmm"});

    for(const auto &dataset: data) {
        for(const auto &checker : dataset.i) {
            if(is_include(inp, checker)) {
                result = rdm(dataset.o);
            }
        }
    }

    return result;
}

template<typename T>
void print(T item) {
    std::cout << item;
}

template<typename T>
str input(T prompt) {
    print(prompt);
    std::string inpu {};
    std::getline(std::cin >> std::ws, inpu);
    return inpu;
}

int main() {
    print("Welcome! This is a simple chatbot by Usitha Indeewara. \nCopyright (c) 2022 Usitha Indeewara. All Rights Reserved.\n\n\n");

    while(true) {
        str userinput = input("You: ");
        if(is_include(userinput, "exit")) {
            break;
        }

        print("Bot: " + chatbot(userinput) + "\n");
    }

    return 0;
}