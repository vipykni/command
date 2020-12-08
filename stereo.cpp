#include "stereo.h"

Stereo::Stereo(QString location)
{
    this->location = location;
}
void Stereo::on() {
    cout << location.toStdString() << " stereo is on" << endl;
}

void Stereo::off() {
    cout << location.toStdString() << " stereo is off" << endl;
}

void Stereo::setCD() {
    cout << location.toStdString() << " stereo is set for CD input" << endl;
}

void Stereo::setDVD() {
    cout << location.toStdString() << " stereo is set for DVD input" << endl;
}

void Stereo::setRadio() {
    cout << location.toStdString() << " stereo is set for Radio" << endl;
}

void Stereo::setVolume(int volume) {
    cout << location.toStdString() << " Stereo volume set to " << volume << endl;
}
