#include <QCoreApplication>

#include "simpleremotecontrol.h"
#include "garagedoor.h"
#include "garagedooropencommand.h"
#include "light.h"
#include "lightoffcommand.h"
#include "lightoncommand.h"
#include "garagedoorclosecommand.h"
#include "tv.h"
#include "tvoffcommand.h"
#include "tvoncommand.h"
#include "stereo.h"
#include "stereooncommand.h"
#include "stereooffcommand.h"
#include "ceilingfan.h"
#include "ceilingfanoncommand.h"
#include "ceilingfanoffcommand.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Light *livingRoomLight = new Light("Living Room");
    Light *kitchenLight = new Light("Kitchen");
    CeilingFan *ceilingFan= new CeilingFan("Living Room");
    GarageDoor *garageDoor = new GarageDoor("Garage");
    Stereo *stereo = new Stereo("Living Room");
    TV *tv =new TV("Living Room");
    
    
    
    SimpleRemoteControl *remote = new SimpleRemoteControl();
    LightOnCommand *lightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand *lightOff = new LightOffCommand(kitchenLight);

    GarageDoorOpenCommand *garageOpen = new GarageDoorOpenCommand(garageDoor);
    GarageDoorCloseCommand *garageClose = new GarageDoorCloseCommand(garageDoor);

    TVOnCommand *tvOn = new TVOnCommand(tv);
    TVOffCommand *tvOff = new TVOffCommand(tv);

    remote->setCommand(lightOn);
    remote->buttonWasPressed();

    remote->setCommand(garageOpen);
    remote->buttonWasPressed();

    remote->setCommand(lightOff);
    remote->buttonWasPressed();

    remote->setCommand(garageClose);
    remote->buttonWasPressed();

    return a.exec();
}
