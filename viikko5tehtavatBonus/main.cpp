#include "mydeviceui.h"
#include <iostream>

using namespace std;

int main()
{
    MyDeviceUI *database;
    database = new MyDeviceUI();
    database->uiShowMenu();

    return 0;
}
