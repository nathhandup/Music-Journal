#include <string>
#include <vector>

struct ArtistInfo {
    std::string name = "";
    std::vector<std::string> albums;
};

bool addName(std::string string, struct ArtistInfo* obj) {
    if(obj->name == "") {
        obj->name = string;
        return 1;
    } 
    return 0;
}
bool addAlbum(std::string string, struct ArtistInfo* obj) {

}