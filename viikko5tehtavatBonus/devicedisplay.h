#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H
#include "devicebaseclass.h"

class DeviceDisplay: public DeviceBaseClass
{
public:
    DeviceDisplay();
    ~DeviceDisplay();
    void setDisplayResolution(void);
    short getDisplayResolution(void);
private:
    short displayResolution;
};

#endif // DEVICEDISPLAY_H
