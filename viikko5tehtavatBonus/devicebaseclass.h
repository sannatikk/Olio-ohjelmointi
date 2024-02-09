#ifndef DEVICEBASECLASS_H
#define DEVICEBASECLASS_H

class DeviceBaseClass
{
public:
    DeviceBaseClass();
    ~DeviceBaseClass();

    void setDeviceID(void);
    short getDeviceID(void);

protected:
    short deviceID;
};

#endif // DEVICEBASECLASS_H
