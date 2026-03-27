#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "UniversityMember.h"

class Department {
private:
    UniversityMember* list[50];
    int count;

public:
    Department();

    void add(UniversityMember* m);
    void showAll();
};

#endif