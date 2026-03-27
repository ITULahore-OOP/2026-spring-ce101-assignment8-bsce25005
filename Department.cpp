#include "Department.h"

Department::Department() {
    count = 0;
}

void Department::add(UniversityMember* m) {
    list[count++] = m;
}

void Department::showAll() {
    for (int i = 0; i < count; i++) {
        list[i]->displayRole();
    }
}