#include "greeter.h"
#include <iostream>

Greeter::Greeter(std::string name) : name_(std::move(name)) {}

void Greeter::say_hello() const {
    std::cout << "Hello, " << name_ << "! How are you doing?\n";
}

