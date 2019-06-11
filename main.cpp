

#include "Code/Wordinfo/Wordinfo.h"
#include "Code/funcs.h"

int main() {
    map<string,Wordinfo> words;
    std::set<string> links;
   std::ifstream is(text);
    if(is.fail())
        throw "Could not find the text file";
    read(is,words,links);
    findmaxoccurs(maxoccur,words);
    std::ofstream os("cross_ref.txt");
    print(os,words,links,maxoccur);
    return 0;
}