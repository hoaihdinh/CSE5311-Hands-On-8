// Author: Hoai Dinh
#pragma once

#define LL_SUCCESS      0
#define LL_EMPTY       -1
#define LL_NOT_FOUND   -2

struct Node {
    int value;
    Node *next;
};

class LinkedList {
    private:
        Node *head;

    public:
        LinkedList();
        
        Node* search(int target);
        void  insert(int newValue);
        int   remove(int target);
        void  print();

        ~LinkedList();
};