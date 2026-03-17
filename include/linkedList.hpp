#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include "artistInfo.hpp"

/* Node structure for linked list of ArtistInfo structures */
struct Node {
    ArtistInfo* data;
    Node* next;
    Node(ArtistInfo* val) : data(val), next(NULL) {}
};

class LinkedList {
public:
    // Head node with all other nodes stored within
    Node* head;
    // Constructor
    LinkedList();
    // Deconstructor
    ~LinkedList();
    // Pushes value to linked list and preserves ordering
    bool pushData(ArtistInfo* value);
    // Prints entire linked list
    void printList() const;
    // Removes value and returns true if successful,
    // or does nothing and returns false
    bool removeData(std::string value);
    // Pulls data that matches value, returns null if not found
    struct ArtistInfo* pullData(std::string value);
};

#endif