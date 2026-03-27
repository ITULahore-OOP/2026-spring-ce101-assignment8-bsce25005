#include <iostream>
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"

using namespace std;

int main() {

    string name;
    int id;
    double cgpa, salary;
    string cardID;
    int level, hours;

    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter CGPA: ";
    cin >> cgpa;

    Student s(name, id, cgpa);

    cout << "Enter Staff Name: ";
    cin >> name;
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Salary: ";
    cin >> salary;

    cout << "Enter Card ID: ";
    cin >> cardID;
    cout << "Enter Access Level: ";
    cin >> level;

    AccessCard card(cardID, level);
    Staff st(name, id, salary, card);

    cout << "Enter TA Name: ";
    cin >> name;
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter CGPA: ";
    cin >> cgpa;
    cout << "Enter Salary: ";
    cin >> salary;
    cout << "Enter Working Hours: ";
    cin >> hours;

    TeachingAssistant ta(name, id, cgpa, salary, card, hours);

    // Department
    Department d;
    d.add(&s);
    d.add(&st);
    d.add(&ta);

    cout << " All Members ";
    d.showAll();

    // Overloading demo
    cout << " Grading ";
    ta.gradeAssignment(90);
    ta.gradeAssignment("A");

    // Sessions
    TutoringSession t1(1, 60, &ta, &s);
    TutoringSession t2(2, 40, &ta, &s);

    TutoringSession t3 = t1 + t2;

    cout << "Merged Session:";
    t3.display();

    if (t1 > t2)
        cout << "Session 1 is longer";
    else
        cout << "Session 2 is longer";

    return 0;
}