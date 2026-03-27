#include "UniversityMember.h"

UniversityMember::UniversityMember(string n, int i) {
    name = n;
    id = i;
}
string UniversityMember::getName() {
    return name;
}

int UniversityMember::getMemberID() {
    return id;
}