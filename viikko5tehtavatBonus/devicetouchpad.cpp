#include "devicetouchpad.h"
#include <iostream>
using namespace std;

DeviceTouchPad::DeviceTouchPad() {}

DeviceTouchPad::~DeviceTouchPad()
{

}

void DeviceTouchPad::setTouchPadSensitivity()
{
    cout << "Set Touchpad Sensitivity: " << endl;
    cin >> touchPadSensitivity;
}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}
