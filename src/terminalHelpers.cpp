#include "terminalHelpers.hpp"
#include "linkedList.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

bool _add__new_artist(LinkedList* list) {
    struct ArtistInfo* temp = new ArtistInfo;
    std::cout << "\n";
    std::cout << "Provide the artist's name: \n";
    std::cout << "\n";
    /* Grab name */
    std::string name;
    std::getline(std::cin, name);
    addName(name, temp);
    /* Grab albums */
    std::vector<std::string> albums;
    std::cout << "\n";
    std::cout << "Provide each album you have listened to.\n";
    std::cout << "Separate each with a new line, when you are done adding enter a blank line.\n";
    std::cout << "\n";
    while(1) {
        std::getline(std::cin, name);
        if (name.length() == 0) {
            break;
        }
        addAlbum(name, temp);
    }
    // Creates ArtistInfo object and adds it to linkedlist
    if  (!list->pushData(temp)) {
        return false;
    }
    std::cout << "Done. Returning to menu.\n";
    std::cout << "\n";
    return true;
}   

bool _add_albums_to_artist(LinkedList* list) {
    std::cout << "\n";
    std::cout << "Provide the artist's name:\n";
    /* Grab name */
    std::string name;
    std::getline(std::cin, name);
    /* Pull data from list */
    struct ArtistInfo* temp = list->pullData(name);
    /* Error check */
    if(!temp) {
        return false;
    }
    std::cout << "Provide each album.\n";
    std::cout << "Separate each with a new line, when you are done adding enter a blank line.\n";
    /* Grab names */
    while(1) {
        std::getline(std::cin, name);
        if (name.length() == 0) {
            break;
        }
        addAlbum(name, temp);
    }
    std::cout << "Done. Returning to menu.\n";
    std::cout << "\n";
    return true;      
}

bool _remove_artist(LinkedList* list) {
    std::cout << "\n";
    std::cout << "Provide the artist's name:\n";
    /* Grab data */
    std::string name;
    std::getline(std::cin, name);
    /* Remove data & error check within function */
    if (!list->removeData(name)) {
        return false;
    }
    std::cout << "Successfully removed !\n";
    std::cout << "\n";
    return true;
}
