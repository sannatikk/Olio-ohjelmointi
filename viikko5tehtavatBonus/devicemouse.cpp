#include "devicemouse.h"
#include <iostream>
using namespace std;

DeviceMouse::DeviceMouse() {}

DeviceMouse::~DeviceMouse()
{

}

void DeviceMouse::setPrimaryButton()
{
    cout << "Set Mouse Primary Button: " << endl;
    cin >> primaryButton;
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
