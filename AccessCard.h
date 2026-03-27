#ifndef ACCESSCARD_H
#define ACCESSCARD_H

#include <iostream>
using namespace std;

class AccessCard {
private:
    string cardID;
    int level;

public:
    AccessCard(string id, int l);
    void display();
    string getCardID();
    int getAccessLevel();
};

#endif
