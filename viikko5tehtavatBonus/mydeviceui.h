#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include "devicedisplay.h"
#include "devicemouse.h"
#include "devicetouchpad.h"

class MyDeviceUI
{
public:
    MyDeviceUI();
    ~MyDeviceUI();

    void uiShowMenu(void);
    void uiSetMouseInformation(void);
    void uiSetTouchPadInformation(void);
    void uiSetDisplayInformation(void);
    void uiShowDeviceInformation(void);

private:
    DeviceMouse *objectDeviceMouse;
    DeviceTouchPad *objectDeviceTouchPad;
    DeviceDisplay *objectDeviceDisplay;
};

#endif // MYDEVICEUI_H
