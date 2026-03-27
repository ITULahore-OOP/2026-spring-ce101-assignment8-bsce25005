#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H

#include <iostream>
using namespace std;

class UniversityMember {
protected:
    string name;
    int id;

public:
    UniversityMember(string n, int i);
    virtual void displayRole() = 0;
    string getName();
    int getMemberID();
};

#endif