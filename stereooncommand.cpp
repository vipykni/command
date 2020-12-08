#include "stereooncommand.h"

StereoOnCommand::StereoOnCommand(Stereo *stereo)
{
    this->stereo = stereo;
    this->name = "StereoOnCommand" + stereo->location;
}
