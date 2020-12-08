#ifndef TVONCOMMAND_H
#define TVONCOMMAND_H

#include "command.h"
#include "tv.h"

class TVOnCommand : public Command
{
protected:
    TV *tv;
public:
    TVOnCommand(TV *tv);
    void execute();
};

#endif // TVONCOMMAND_H
