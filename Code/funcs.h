//
// Created by Mindaugas K on 6/10/2019.
//

#ifndef OOP5_FUNCS_H
#define OOP5_FUNCS_H

#define text "../Sources/text.txt"
#include "Wordinfo/Wordinfo.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <map>
#include <set>
#include <regex>
#include <string>
using std::regex;
using std::ifstream;
using std::map;
using std::string;
 const regex rword (R"([^\W_]+(?:['_-][^\W_]+)*)");
 const regex rlink ("(https?:\\/\\/(?:www\\.|(?!www))[a-zA-Z0-9][a-zA-Z0-9-]+[a-zA-Z0-9]\\.[^\\s]{2,}|www\\.[a-zA-Z0-9][a-zA-Z0-9-]+[a-zA-Z0-9]\\.[^\\s]{2,}|https?:\\/\\/(?:www\\.|(?!www))[a-zA-Z0-9]+\\.[^\\s]{2,}|www\\.[a-zA-Z0-9]+\\.[^\\s]{2,})");

void read(std::ifstream & input,map<string,Wordinfo>& words, std::set<string>&  links);
void print(std::ofstream & output, map<string,Wordinfo> words, std::set<string> links);


#endif //OOP5_FUNCS_H
