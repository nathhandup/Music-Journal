#ifndef LINKEDLIST
#define LINKEDLIST

// Node structure
struct Node;

// LinkedList structure. Includes:
// push_front(void* value)
// push_back(void* value)
// print(void (*func)(void*)) 
// remove(void* value)
class LinkedList {
public:
    // head with all other nodes stored within
    Node* head;
    // pushes value to linked list and preserves ordering according to compare function
    void push(void* value, bool (*compare)(void*, void*));
    // prints linked list according to function given
    void print(void (*func)(void*)) const;
    // removes value according to equality function given
    bool remove(void* value, bool (*func)(void*, void*));
};

#endif