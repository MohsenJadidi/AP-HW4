#include<stdexcept>

#ifndef STACK_HPP
#define STACK_HPP

template<typename T>
Stack<T>::Stack()
{
    phead = nullptr;
    count = 0;
}

template<typename T>
Stack<T>::~Stack()
{
    while(phead)
    {
        auto* next = phead->pnext;
        delete phead;
        phead = next;
    }
}

template<typename T>
bool Stack<T>::isEmpty() const
{
    return phead == nullptr;
}

/*  Push an object  */
template<typename T>
void Stack<T>::push(const T& item)
{
    Node* node{new Node{item}};     // Create the new node
    node->pnext = phead;            // Point to the old top node
    phead = node;                   // Make the new node the top
    count++;
}

/*  Pop an object  */
template<typename T>
T Stack<T>::pop()
{
    if(isEmpty())       // If it's empty
        throw std::logic_error {"Stack empty"};  // Pop is not valid so throw exception

    T item_temp = phead->item;
    Node* pnext_temp = phead->pnext;
    
    delete phead;
    phead = pnext_temp;
    count--;

    return item_temp;
}

#endif