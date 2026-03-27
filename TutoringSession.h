#ifndef SESSION_H
#define SESSION_H

#include "TeachingAssistant.h"

class TutoringSession {
private:
    int id;
    double duration;
    TeachingAssistant* ta;
    Student* st;

public:
    TutoringSession(int i, double d, TeachingAssistant* t, Student* s);

    void display();
    double getDuration();

    TutoringSession operator+(TutoringSession other);
};

bool operator>(TutoringSession a, TutoringSession b);

#endif
