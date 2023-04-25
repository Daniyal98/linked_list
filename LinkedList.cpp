#include "LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList()
{
    head = NULL;
}

template <typename T>
void LinkedList<T>::insert(T value)
{
    Node<T>* newNode = new Node<T>();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
}