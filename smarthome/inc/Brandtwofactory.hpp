#ifndef BRANDTWOFACTORY_HPP
#define BRANDTWOFACTORY_HPP

#include "Devicefactory.hpp"

class Brandtwofactory : public DeviceFactory {
    public:
    shared_ptr<Light> createlight(const string& name, const string& id) override ;
    shared_ptr<Camera> createcamera(const string& name, const string& id) override ;
    shared_ptr<DoorLock> createdoorlock(const string& name, const string& id) override ;
    shared_ptr<Thermostat> createthermostat(const string& name, const string& id) override ;
};

#endif