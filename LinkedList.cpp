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
        return;
    }

    Node<T>* currNode = head;

    while (currNode->next != NULL)
    {
        currNode = currNode->next;
    }

    currNode->next = newNode;
}

template <typename T>
void LinkedList<T>::display()
{
    Node<T>* currentNode = head;
    while (currentNode != NULL)
    {
        cout << currentNode->data << " -> ";
        currentNode = currentNode->next;
    }

    cout << endl;
}