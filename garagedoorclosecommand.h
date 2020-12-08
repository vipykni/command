#ifndef GARAGEDOORCLOSECOMMAND_H
#define GARAGEDOORCLOSECOMMAND_H

#include "command.h"
#include "garagedoor.h"

class GarageDoorCloseCommand : public Command
{
protected:
    GarageDoor *garageDoor;
public:
    GarageDoorCloseCommand(GarageDoor*);
    virtual void execute();
};

#endif // GARAGEDOORCLOSECOMMAND_H
