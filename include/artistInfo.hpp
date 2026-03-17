#ifndef ARTISTINFO_HPP
#define ARTISTINFO_HPP

#include <string>
#include <vector>

/* ArtistInfo struct posesses artist name & vector of strings 
   representing albums listened to from said artist */
struct ArtistInfo {
    std::string name;
    std::vector<std::string> albums;
};

// Prints ArtistInfo struct
extern void printArtistInfo(const struct ArtistInfo* obj);

// Adds line as a name to ArtistInfo struct
extern bool addName(const std::string line, struct ArtistInfo* obj);

// adds line as album name to ArtistInfo struct
extern bool addAlbum(const std::string line, struct ArtistInfo* obj);

// determines if ArtistInfo struct possesses given name
extern bool equal(const std::string line, struct ArtistInfo* obj);

// determines if ArtistInfo struct a belongs before ArtistInfo struct b
// returns true if so, false otherwise.
extern bool before(struct ArtistInfo* a, struct ArtistInfo* b);

#endif