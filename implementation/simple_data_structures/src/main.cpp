// Author: Hoai Dinh

#include <iostream>

#include "stack.hpp"
#include "queue.hpp"
#include "linkedlist.hpp"

void stack_demo() {
    Stack s = Stack(10);

    std::cout << "=== Stack Demonstration ===" << std::endl;
    std::cout << "Empty: " << (s.is_empty() ? "Y" : "N") << std::endl;
    std::cout << "\nPushing items 1-10" << std::endl;
    for(int i = 0; i < 10; i++) {
        s.push(i+1);
    }
    std::cout << "\nEmpty: " << (s.is_empty() ? "Y" : "N") << std::endl;
    s.print();
    std::cout << "1st Pop: " << s.pop()  << std::endl;
    std::cout << "2nd Pop: " << s.pop()  << std::endl;
    s.print();
    std::cout << "Stack Peek: " << s.peek() << std::endl;
    s.print();
    std::cout << "Pushing 99" << std::endl;
    s.push(99);
    s.print();
    std::cout << "\nPopping all items... ";
    while(!s.is_empty()) {
        std::cout << s.pop() << " ";
    }
    std::cout << "\n\nEmpty: " << (s.is_empty() ? "Y" : "N") << std::endl;
    s.print();

    std::cout << std::endl;
}

void queue_demo() {
    Queue q = Queue(10);

    std::cout << "=== Queue Demonstration ===" << std::endl;
    std::cout << "Empty: " << (q.is_empty() ? "Y" : "N") << std::endl;
    std::cout << "\nEnqueueing items 1-10" << std::endl;
    for(int i = 0; i < 10; i++) {
        q.enqueue(i+1);
    }
    std::cout << "\nEmpty: " << (q.is_empty() ? "Y" : "N") << std::endl;
    q.print();
    std::cout << "1st Dequeue: " << q.dequeue()  << std::endl;
    std::cout << "2nd Dequeue: " << q.dequeue()  << std::endl;
    q.print();
    std::cout << "Enqueueing 99" << std::endl;
    q.enqueue(99);
    q.print();
    std::cout << "\nDequeueing all items... ";
    while(!q.is_empty()) {
        std::cout << q.dequeue() << " ";
    }
    std::cout << "\n\nEmpty: " << (q.is_empty() ? "Y" : "N") << std::endl;
    q.print();

    std::cout << std::endl;
}

void search_and_remove(LinkedList& l, int target) {
    std::cout << "Searching " << target << "... " << ((l.search(target) != nullptr) ? "Found!" : "Not Found") << std::endl;
    std::cout << "Removing "  << target << "... ";
    int status = l.remove(target);
    if(status == LL_SUCCESS) {
        std::cout << "Removed successfully" << std::endl;
    } else if (status == LL_NOT_FOUND) {
        std::cout << "Could not find " << target << std::endl;
    } else if (status == LL_EMPTY) {
        std::cout << "List is empty" << std::endl;
    }
    std::cout << std::endl;
}

void linkedlist_demo() {
    LinkedList l = LinkedList();
    
    std::cout << "=== Linked List Demonstration ===" << std::endl;
    l.print();
    search_and_remove(l, 99);

    std::cout << "Inserting values 1-10\n" << std::endl;
    for(int i = 0; i < 10; i++) {
        l.insert(i+1);
    }
    
    int targets[] = {4, -3, 10, 1, 6};

    for(int i = 0; i < 5; i++) {
        l.print();

        search_and_remove(l, targets[i]);
    }

    l.print();

    std::cout << "Inserting 99" << std::endl;
    l.insert(99);
    l.print();
}

int main() {
    stack_demo();
    queue_demo();
    linkedlist_demo();
}