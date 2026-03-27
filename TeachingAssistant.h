#ifndef TA_H
#define TA_H

#include "Student.h"
#include "Staff.h"

class TeachingAssistant : public Student, public Staff {
private:
    int hours;

public:
    TeachingAssistant(string n, int i, double cg,
        double sal, AccessCard c, int h);

    void displayRole();

    void gradeAssignment(int marks);
    void gradeAssignment(string grade);
};

#endif