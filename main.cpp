

#include "Code/Wordinfo/Wordinfo.h"
#include "Code/funcs.h"

int main() {
    map<string,Wordinfo> words;
    std::set<string> links;
   std::ifstream is(text);
    if(is.fail())
        throw "Could not find the text file";
    read(is,words,links);
    std::ofstream os("cross_ref.txt");
    print(os,words,links);
    return 0;
}