#include "Staff.h"

Staff::Staff(string n, int i, double s, AccessCard c)
    : UniversityMember(n, i), card(c)
{
    salary = s;
}

void Staff::displayRole() {
    cout << "Staff: " << name << " | Salary: " << salary << endl;
    card.display();
}
double Staff::getSalary() {
    return salary;
}