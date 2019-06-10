//
// Created by Mindaugas K on 6/10/2019.
//

#ifndef OOP5_WORDINFO_H
#define OOP5_WORDINFO_H

#include <vector>
using std::vector;

class Wordinfo {
private:
    int count=0;
    vector<int> occurs;
public:
    Wordinfo() : count(0), occurs(0) {}
    explicit Wordinfo(int occur){count++;
    occurs.push_back(occur);}
    void addc(){count++;}
    void addref(int occur){occurs.push_back(occur);}
    int getcount(){return count;}
    vector<int> getoccurs(){return occurs;}

};


#endif //OOP5_WORDINFO_H
