// Author: Hoai Dinh

#include <iostream>
#include <stdexcept>

#include "stack.hpp"

Stack::Stack(int capacity) {
    size  = capacity;
    items = new int[size];
    top   = 0;
}

bool Stack::is_empty() {
    return top == 0;
}

int Stack::peek() {
    if(is_empty()) {
        throw std::runtime_error("Stack::peek(): Stack is empty\n");
    }
    return items[top - 1];
}

void Stack::push(int value) {
    if(top == size) {
        throw std::runtime_error("Stack::push(): Stack is at max capacity\n");
    }

    items[top++] = value;
}

int Stack::pop() {
    if(is_empty()) {
        throw std::runtime_error("Stack::peek(): Stack is empty\n");
    }

    return items[--top];
}

void Stack::print() {
    std::cout << "Stack Data: (top) = ";

    if(!is_empty()) {
        for(int i = top-1; i >= 0; i--) {
            std::cout << items[i] << ((i != 0) ? ", " : "");
        }
    } else {
        std::cout << "(Empty)";
    }

    std::cout << std::endl;
}

Stack::~Stack() {
    delete items;
}