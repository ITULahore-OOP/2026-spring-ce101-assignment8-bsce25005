#ifndef STUDENT_H
#define STUDENT_H

#include "UniversityMember.h"

class Student : virtual public UniversityMember {
private:
    double cgpa;

public:
    Student(string n, int i, double c);
    void displayRole();
    double getCGPA();
    void updateCGPA(double newCGPA);
};

#endif
