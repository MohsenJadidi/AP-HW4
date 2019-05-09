#ifndef STACK_H
#define STACK_H

template<typename T>
class Stack
{
private:
    // Nested class
    class Node
    {
    public:
        T item{};                           // The object stored in this node
        Node* pnext{};                      // Pointer to next node
        Node(const T& item): item{item} {}; // Create a node from an object
    };
    
    Node* phead{};          // Points to the top of the stack
    int count;              // Number of created nodes

public:

    Stack();          // Default constructor
    ~Stack();         // Destructor

    //Stack& operator=(const Stack& rhs);  
    //Stack(const Stack& stack);

    void push(const T& item);   // Push an object 
    T pop();                    // Pop an object
    bool isEmpty() const;       // Empty test
    int getCount() const {return count;};
};

#include"stack.hpp"

#endif