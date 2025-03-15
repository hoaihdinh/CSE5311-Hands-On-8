// Author: Hoai Dinh
#pragma once

class Stack {
    private:
        int *items;
        int size;
        int top;

    public:
        Stack(int capacity);

        bool is_empty();
        int  peek();
        void push(int value);
        int  pop();
        void print();

        ~Stack();

};