// Author: Hoai Dinh
#pragma once

class Queue {
    private:
        int  *items;
        int  size;
        int  head;
        int  tail;
        bool empty;
    
    public:
        Queue(int capacity);

        bool is_empty();
        void enqueue(int value);
        int  dequeue();
        void print();

        ~Queue();
};