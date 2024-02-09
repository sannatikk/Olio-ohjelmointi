#ifndef DEVICETOUCHPAD_H
#define DEVICETOUCHPAD_H
#include "devicebaseclass.h"

class DeviceTouchPad: public DeviceBaseClass
{
public:
    DeviceTouchPad();
    ~DeviceTouchPad();
    void setTouchPadSensitivity(void);
    short getTouchPadSensitivity(void);
private:
    short touchPadSensitivity;
};

#endif // DEVICETOUCHPAD_H
