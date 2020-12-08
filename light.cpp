#include "light.h"

Light::Light(QString location)
{
    this->location = location;
}

void Light::on() {
        cout << "Light is on" << endl;
}

void Light::off() {
    cout << "Light is off" << endl;
}
