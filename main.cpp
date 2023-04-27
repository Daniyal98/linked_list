#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp" // for template classes, we need to explicitly include the cpp file
using namespace std;

int main()
{
    LinkedList<int> linked_list;
    linked_list.insert(1);
    linked_list.insert(2);
    linked_list.insert(3);
    linked_list.insertAt(4, 1);
    linked_list.display();
}