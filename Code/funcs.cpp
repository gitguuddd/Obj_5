//
// Created by Mindaugas K on 6/10/2019.
//
#include "Wordinfo/Wordinfo.h"
#include "funcs.h"
string occtostring(vector<int>occurences){
    string a=" ";
    for(int b:occurences){
        a+=" ";
        a+=std::to_string(b);
    }
    return a;
}
void read(std::ifstream & input,map<string,Wordinfo>& words, std::set<string>& links){
    printf("Reading words/links from text file...\n");
    string line;
    std::smatch match;
    string word;
    map<string, Wordinfo>::iterator iter;
    int pos=0;
    while (getline (input, line))
    {
        ++pos;
        for (std::sregex_iterator i = std::sregex_iterator(line.begin(), line.end(), rlink);
             i != std::sregex_iterator();
             ++i)
        {
            match = *i;
            links.insert(match.str());
        }
        for (std::sregex_iterator i = std::sregex_iterator(line.begin(), line.end(), rword);
             i != std::sregex_iterator();
             ++i)
        {
            match = *i;
            word=match.str();
            std::transform(word.begin(), word.end(), word.begin(), ::tolower);
            iter=words.find(word);
            if(iter != words.end())
            {
                iter->second.addc();
                iter->second.addref(pos);
            }
            else{
                words.insert(std::pair<string,Wordinfo>(word,Wordinfo(pos)));
            }

        }
    }
    input.close();
}
void print(std::ofstream & output, map<string,Wordinfo> words, std::set<string> links){
    std::cout<<"Printing words and links to output file";
    vector <int> wordoccurs;
    output<<"########################WORDS########################\n";
    for(auto& a:words)
        if(a.second.getcount()>1)
            output<<std::left<<a.first<<" occurs "<<a.second.getcount()<<" time/s in lines: "<<occtostring(a.second.getoccurs())<<"\n";
        output<<"########################LINKS########################\n";
    for(auto& b:links)
        output<<b<<"\n";
    output.close();
}