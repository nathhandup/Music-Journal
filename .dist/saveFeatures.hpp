#ifndef SAVEFEATURES_HPP
#define SAVEFEATURES_HPP

#include <string>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <vector>

// Saves string formatted properly in .bin file
bool saveString(const std::string& s, std::ofstream& out);
// Saves an entire vector of strings, calls saveString
bool saveVectorOfStrings(const std::vector<std::string>& v, std::ofstream& out);
// Saves LinkedList structure, calls saveVectorOfStrings
bool saveList(struct LinkedList* list);
// Loads entire string from .bin file into s
bool loadString(std::string& s, std::ifstream& in);
// Loads vector of strings into v, calls loadString
bool loadVectorOfStrings(std::vector<std::string>& v, std::ifstream& in);
// Loads entire LinkedList struct and returns pointer to it
LinkedList* loadList();

#endif