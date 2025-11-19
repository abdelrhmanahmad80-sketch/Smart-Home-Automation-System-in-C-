#ifndef DEVICEFACTORY_HPP
#define DEVICEFACTORY_HPP

#include <memory>
#include "Device.hpp"
#include "Camera.hpp"
#include "Light.hpp"
#include "DoorLock.hpp"
#include "Thermostat.hpp"
#include "Motionsensor.hpp"
using namespace std;
class DeviceFactory {
public:
    virtual shared_ptr<Light> createlight(const string& name, const string& id) = 0;
    virtual shared_ptr<Camera> createcamera(const string& name, const string& id) = 0;
    virtual shared_ptr<DoorLock> createdoorlock(const string& name, const string& id) = 0;
    virtual shared_ptr<Thermostat> createthermostat(const string& name, const string& id) = 0;
    virtual shared_ptr<MotionSensor> createmotionsensor(const string& name, const string& id) = 0;
};

#endif