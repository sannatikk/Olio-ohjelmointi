#include "mydeviceui.h"
#include <iostream>
using namespace std;


MyDeviceUI::MyDeviceUI()
{
    objectDeviceMouse = new DeviceMouse();
    objectDeviceTouchPad = new DeviceTouchPad;
    objectDeviceDisplay = new DeviceDisplay;

}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceMouse;
    delete objectDeviceTouchPad;
    delete objectDeviceDisplay;
}

void MyDeviceUI::uiShowMenu()
{

    int choice = 0;

    while (true) {

        cout << "DEVICE MENU" << endl;
        cout << "===========" << endl;
        cout << "1: Set Mouse Information" << endl;
        cout << "2: Set Touch Pad Information" << endl;
        cout << "3: Set Display Information" << endl;
        cout << "4: Show All Devices' Information " << endl;
        cout << "5: Finish" << endl;
        cout << endl;

        cout << "Choose: " << endl;
        cin >> choice;
        cout << endl;


        if (choice < 1 || choice > 5) {
            cout << "Invalid choice: Please enter a number between 1 and 5." << endl;
            cout << endl;
            continue;
        }

        else if (choice == 1) {
            MyDeviceUI::uiSetMouseInformation();
            choice = 0;
        }
        else if (choice == 2) {
            MyDeviceUI::uiSetTouchPadInformation();
            choice = 0;
        }
        else if (choice == 3) {
            MyDeviceUI::uiSetDisplayInformation();
            choice = 0;
        }
        else if (choice == 4) {
            MyDeviceUI::uiShowDeviceInformation();
            choice = 0;
        }
        else if (choice == 5) {
            return;
        }
    }
}

void MyDeviceUI::uiSetMouseInformation()
{
    cout << "SET MOUSE INFORMATION" << endl;
    cout << "=====================" << endl;

    cout << "Set Mouse Device ID: " << endl;
    objectDeviceMouse->setDeviceID();
    objectDeviceMouse->setPrimaryButton();
    cout << endl;


}

void MyDeviceUI::uiSetTouchPadInformation()
{
    cout << "SET TOUCHPAD INFORMATION" << endl;
    cout << "========================" << endl;

    cout << "Set Touchpad Device ID: " << endl;
    objectDeviceTouchPad->setDeviceID();
    objectDeviceTouchPad->setTouchPadSensitivity();
    cout << endl;

}

void MyDeviceUI::uiSetDisplayInformation()
{
    cout << "SET DISPLAY INFORMATION" << endl;
    cout << "=======================" << endl;

    cout << "Set Display Device ID: " << endl;
    objectDeviceDisplay->setDeviceID();

    // jostain syystä tässä kohtaa ohjelma alkoi pyörittää menua loputtomiin
    // joten pakotin käyttäjän syötteen nollaantumaan
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    objectDeviceDisplay->setDisplayResolution();
    cout << endl;

}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout << "ALL DEVICE INFORMATION" << endl;
    cout << "======================" << endl;

    short mID = objectDeviceMouse->getDeviceID();
    short mPB = objectDeviceMouse->getPrimaryButton();
    short tID = objectDeviceTouchPad->getDeviceID();
    short tSS = objectDeviceTouchPad->getTouchPadSensitivity();
    short dID = objectDeviceDisplay->getDeviceID();
    short dRE = objectDeviceDisplay->getDisplayResolution();

    cout << "Mouse Device ID: " << mID << endl;
    cout << "Mouse Primary Button: " << mPB << endl;
    cout << "Touchpad Device ID: " << tID << endl;
    cout << "Touchpad Device Sensitivity: " << tSS << endl;
    cout << "Display Device ID: " << dID << endl;
    cout << "Display Device Resolution: " << dRE << endl;
    cout << "" << endl;


}
