#include "TeachingAssistant.h"

TeachingAssistant::TeachingAssistant(string n, int i, double cg,
    double sal, AccessCard c, int h)
    : UniversityMember(n, i),
    Student(n, i, cg),
    Staff(n, i, sal, c)
{
    hours = h;
}

void TeachingAssistant::displayRole() {
    cout << "TA: " << name << " | Hours: " << hours << endl;
}

void TeachingAssistant::gradeAssignment(int marks) {
    cout << "Marks: " << marks << endl;
}

void TeachingAssistant::gradeAssignment(string grade) {
    cout << "Grade: " << grade << endl;
}