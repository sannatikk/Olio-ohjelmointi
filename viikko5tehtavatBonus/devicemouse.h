#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H
#include "devicebaseclass.h"

class DeviceMouse: public DeviceBaseClass
{
public:
    DeviceMouse();
    ~DeviceMouse();
    void setPrimaryButton(void);
    short getPrimaryButton(void);
private:
    short primaryButton;
};

#endif // DEVICEMOUSE_H
