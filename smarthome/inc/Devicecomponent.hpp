#ifndef DEVICECOMPONENET_HPP
#define DEVICECOMPONENET_HPP

#include <iostream>
using namespace std;

class DeviceComponent {
    public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual string getId() const = 0;
    virtual string getName() const = 0;
};

#endif