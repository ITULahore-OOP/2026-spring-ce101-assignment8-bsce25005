#include "TutoringSession.h"

TutoringSession::TutoringSession(int i, double d,
    TeachingAssistant* t, Student* s) {
    id = i;
    duration = d;
    ta = t;
    st = s;
}

void TutoringSession::display() {
    cout << "Session ID: " << id
        << " | Duration: " << duration << endl;
}

double TutoringSession::getDuration() {
    return duration;
}

TutoringSession TutoringSession::operator+(TutoringSession other) {
    return TutoringSession(0, duration + other.duration, ta, st);
}

bool operator>(TutoringSession a, TutoringSession b) {
    return a.getDuration() > b.getDuration();
}