#include "tv.h"

TV::TV(QString place)
{
this->place = place;
}

void TV::on() {
    cout << "TV on" << endl;
}

void TV::off() {
    cout << "TV off" << endl;
}

void TV::setInputChannel(){
    cout<<"Set input Channel";
}
