#include "AccessCard.h"

AccessCard::AccessCard(string id, int l) {
    cardID = id;
    level = l;
}

void AccessCard::display() {
    cout << "Card ID: " << cardID << ", Level: " << level << endl;
}
string AccessCard::getCardID() {
    return cardID;
}

int AccessCard::getAccessLevel() {
    return level;
}