//
// Created by Mindaugas K on 6/10/2019.
//
#include "Wordinfo/Wordinfo.h"
#include "funcs.h"
map<string,Wordinfo>::iterator it;
/*map<string,Wordinfo>::iterator it2;*/
int maxoccur=0;
string occtostring(vector<int>occurences){
    string a=" ";
    for(int b:occurences){
        a+=" ";
        a+=std::to_string(b);
    }
    return a;
}


void findmaxoccurs(int& maxoccur,map<string,Wordinfo> a){
    for(auto b:a)
        if(maxoccur<b.second.getcount())
            maxoccur=b.second.getcount();
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
void print(std::ofstream & output, map<string,Wordinfo> words, std::set<string> links,  int maxoccurr){
    std::cout<<"Printing words and links to output file";
    vector <int> wordoccurs;
    output<<"########################WORDS########################\n";
    for(int i=1;i<=maxoccurr;i++){
    for(it=words.begin();it!=words.end();it++)
        if(it->second.getcount()>1)
            if(i==it->second.getcount()){
/*                 it2=it++;
                if(it2==words.end()){*/
            output<<std::left<<it->first<<" occurs "<<it->second.getcount()<<" time/s in lines: "<<occtostring(it->second.getoccurs())<<"\n";
/*                break;}
            else{
                output<<std::left<<it->first<<" occurs "<<it->second.getcount()<<" time/s in lines: "<<occtostring(it->second.getoccurs())<<"     -       "<<std::right<<it2->first<<" occurs "<<it2->second.getcount()<<" time/s in lines: "<<occtostring(it2->second.getoccurs())<<"\n";
            }*/}}
        output<<"########################LINKS########################\n";
    for(auto& b:links)
        output<<b<<"\n";
    output.close();
}