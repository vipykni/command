#include "garagedoorclosecommand.h"

GarageDoorCloseCommand::GarageDoorCloseCommand(GarageDoor *gd)
{
    this->garageDoor = gd;

}
void GarageDoorCloseCommand::execute() {
    garageDoor->down();
}
