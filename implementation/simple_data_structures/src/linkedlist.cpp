// Author: Hoai Dinh

#include <iostream>

#include "linkedlist.hpp"

LinkedList::LinkedList() {
    head = nullptr;
}

Node* LinkedList::search(int target) {
    Node *tmp = head;

    while(tmp != nullptr && tmp->value != target) {
        tmp = tmp->next;
    }

    return tmp;
}

void LinkedList::insert(int newValue) {
    Node *tmp = new Node{newValue, head};
    head = tmp;
}

int LinkedList::remove(int target) {
    if(head == nullptr) {
        return LL_EMPTY;
    }

    Node *prev = nullptr;
    Node *curr = head;

    while(curr->value != target && curr->next != nullptr) {
        prev = curr;
        curr = curr->next;
    }

    if(curr->value != target) {
        return LL_NOT_FOUND;
    }
    
    if(prev != nullptr) {
        prev->next = curr->next;
    } else {
        head = curr->next;
    }
    
    delete curr;
    return LL_SUCCESS;
}

void LinkedList::print() {
    Node *tmp = head;

    std::cout << "Linked List Data: ";
    while(tmp != nullptr) {
        std::cout << "[ " << tmp->value << " ] -> ";
        tmp = tmp->next;
    }
    std::cout << "[ NULL ]" << std::endl;
}

LinkedList::~LinkedList() {
    Node *cleanUpCrew = head;

    while(head != nullptr) {
        head = head->next;
        delete cleanUpCrew;
        cleanUpCrew = head;
    }
}