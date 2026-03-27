#ifndef STAFF_H
#define STAFF_H

#include "UniversityMember.h"
#include "AccessCard.h"

class Staff : virtual public UniversityMember {
private:
    double salary;
    AccessCard card;

public:
    Staff(string n, int i, double s, AccessCard c);
    void displayRole();
    double getSalary();
};

#endif

