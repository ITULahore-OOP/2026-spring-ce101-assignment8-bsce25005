#include "Student.h"

Student::Student(string n, int i, double c)
    : UniversityMember(n, i)
{
    cgpa = c;
}

void Student::displayRole() {
    cout << "Student: " << name << " | CGPA: " << cgpa << endl;
}
double Student::getCGPA() {
    return cgpa;
}

void Student::updateCGPA(double newCGPA) {
    cgpa = newCGPA;
}