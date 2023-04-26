#pragma once
#include <iostream>
using namespace std;

template <typename T>
struct Node
{
    T data;
    Node* next;
};


template <typename T>
class LinkedList
{
    private:
    Node<T>* head;

    public:
    LinkedList();
    void insert(T value);
    void display();
};