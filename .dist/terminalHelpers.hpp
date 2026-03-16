#ifndef TERMINALHELPERS_HPP
#define TERMINALHELPERS_HPP

#include "linkedList.hpp"
#include "artistInfo.hpp"

// Prints to terminal & reads from terminal
// Requests an artist & albums and adds it to list
bool _add__new_artist(LinkedList* list);

// Prints to terminal & reads from terminal
// Requests artist name & albums and adds to list
bool _add_albums_to_artist(LinkedList* list);

// Prints to terminal & reads from terminal
// Removes a requested artist from list
bool _remove_artist(LinkedList* list);

#endif