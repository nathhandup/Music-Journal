#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

#include "artistInfo.hpp"
#include "linkedList.hpp"
#include "saveFeatures.hpp"
#include "terminalHelpers.hpp"

int main(void) {
    LinkedList* list = loadList();
    while(1) {
        std::cout << "Use one of the following commands:  ";
        std::cout << "Add Artist (AA), ";
        std::cout << "Add Album to Artist (AAA), ";
        std::cout << "Remove Artist (RA), ";
        std::cout << "Print (P), ";
        std::cout << "Quit (Q)\n";
        std::cout << "\n";
        std::string intake;
        std::getline(std::cin, intake);
        
        if(intake == "AA") {
            _add__new_artist(list);
        } else if(intake == "AAA") {
            _add_albums_to_artist(list);
        } else if(intake == "RA") {
            _remove_artist(list);
        } else if(intake == "P") {
            list->printList();
        } else if(intake == "Q") {  
            break;
        }
    }
    saveList(list);
    delete list;
    return 0;
}