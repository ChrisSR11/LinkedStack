// Implementation file for linked StackType
#include "StackType.h"

template<class T>
StackType<T>::StackType()
{
    topPtr = nullptr;
    length = 0;
}

template<class T>
bool StackType<T>::IsFull()
{
    return false;
}

template <class T>
bool StackType<T>::IsEmpty()
{
    return length == 0;
}

template<class T>
void StackType<T>::Push(T item)
{
    Node* newNode = new Node;
    newNode->info = item;

    if(topPtr == nullptr)
        topPtr = newNode;
    else{
        newNode->next = topPtr;
        topPtr = newNode;
    }

    size++;
}

template<class T>
void StackType<T>::Pop()
{
    if(topPtr == nullptr)
        throw EmptyStack();

    Node* tmp = topptr;
    topPtr = topPtr->next;
    delete tmp;
    size--;
}

template<class T>
T StackType<T>::Top()
{
    if(topPtr == nullptr)
        return EmptyStack();

    return topPtr->info;
}