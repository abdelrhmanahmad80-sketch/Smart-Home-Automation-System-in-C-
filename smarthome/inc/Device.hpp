#ifndef DEVICE_HPP
#define DEVICE_HPP

#include<iostream>
using namespace std;

class Device{
    protected:
    string name;
    string id;
    public:
    Device(const string& name, const string& id) : name(name), id(id) {}
    string getName() const { return name; }
    string getId() const { return id; }
    virtual void TurnOn()=0;
    virtual void TurnOff()=0;
};

#endif