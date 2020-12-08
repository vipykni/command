#ifndef STEREOONCOMMAND_H
#define STEREOONCOMMAND_H

#include "command.h"
#include "stereo.h"

class StereoOnCommand : public Command
{
protected:
    Stereo *stereo;
public:
    StereoOnCommand(Stereo*);
    virtual void execute();
};

#endif // STEREOONCOMMAND_H
