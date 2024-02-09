#include "devicedisplay.h"
#include <iostream>
using namespace std;

DeviceDisplay::DeviceDisplay() {}

DeviceDisplay::~DeviceDisplay()
{

}

void DeviceDisplay::setDisplayResolution()
{
    cout << "Set Display Resolution: " << endl;
    cin >> displayResolution;
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
