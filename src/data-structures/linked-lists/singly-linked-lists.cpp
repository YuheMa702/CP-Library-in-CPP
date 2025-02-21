#include "data-structures/linked-lists/singly-linked-lists.hpp"
#include <iostream>
using namespace CP;

SLinkedList::SLinkedList() {
    SNode* dummy {new SNode};
    head_ = dummy;
    tail_ = dummy;
    length_ = 0;
}

SLinkedList::SLinkedList(SNode* head, SNode* tail, int length)
    : head_{head}
    , tail_{tail}
    , length_{length}
{}

SLinkedList::~SLinkedList() {
    SNode* tmp = head_;
    while (tmp != nullptr) {
        SNode* next = tmp->next;
        delete tmp;
        tmp = next;
    }
}

void SLinkedList::push_front(int data) {
    SNode* newFront {new SNode};
    newFront->data = data;
    newFront->next = head_;
    head_ = newFront;
    ++length_;
}

void SLinkedList::push_back(int data) {
    SNode* newDummy {new SNode};
    tail_->data = data;
    tail_->next = newDummy;
    tail_ = newDummy;
    ++length_;
}

void SLinkedList::pop_front() {
    SNode* headNext{head_->next};
    delete head_;
    head_ = headNext;
    --length_;
}

int SLinkedList::peek_front() {
    int res {head_->data};
    return res;
}

int SLinkedList::length() {
    return length_;
}

bool SLinkedList::is_empty() {
    return length_ == 0;
}

void SLinkedList::print() {
    for (SNode* tmp {head_}; tmp != tail_; tmp = tmp->next) {
        std::cout << tmp->data << " -> ";
    }
    std::cout << "dummy\n";
}