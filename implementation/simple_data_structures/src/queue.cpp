// Author: Hoai Dinh

#include <iostream>
#include <stdexcept>

#include "queue.hpp"

Queue::Queue(int capacity) {
    size  = capacity;
    items = new int[size];
    head  = 0;
    tail  = (-1) % size;
    empty = true;
}

bool Queue::is_empty() {
    return empty;
}

void Queue::enqueue(int value) {
    if(!is_empty() && head == (tail + 1) % size) {
        throw std::runtime_error("Queue::enqueue(): Queue is at max capacity\n");
    }

    tail = (tail + 1) % size;
    items[tail] = value;
    empty = false;
}

int Queue::dequeue() {
    if(is_empty()) {
        throw std::runtime_error("Queue::dequeue(): Queue is empty\n");
    }

    if(head == tail) {
        empty = true;
    }

    int result = items[head];
    head = (head + 1) % size;
    return result;
}

void Queue::print() {
    std::cout << "Queue Data: ";

    if(!is_empty()) {
        if(head != tail) {
            for(int i = head; i != tail; i = (i+1) % size) {
                std::cout << items[i] << ", ";
            }

            if(head != tail) {
                std::cout << items[tail];
            }
        } else {
            std::cout << items[head];
        }
    } else {
        std::cout << "(Empty)";   
    }

    std::cout << std::endl;
}

Queue::~Queue() {
    delete items;
}
