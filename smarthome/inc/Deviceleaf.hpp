#ifndef DEVICELEAF_HPP
#define DEVICELEAF_HPP

#include "Deviceleaf.hpp"
#include <memory>
#include "Device.hpp"
#include "Devicecomponent.hpp"
using namespace std;

class DeviceLeaf : public DeviceComponent {
    private:
        shared_ptr<Device> device;
    public:
        DeviceLeaf(shared_ptr<Device> dev) : device(dev) {}

        void turnOn() override ;

        void turnOff() override ;

        string getId() const override ;

        string getName() const override ;
};

#endif