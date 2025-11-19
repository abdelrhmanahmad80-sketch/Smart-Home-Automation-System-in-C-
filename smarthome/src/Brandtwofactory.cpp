#include "Brandtwofactory.hpp"

shared_ptr<Light> Brandtwofactory::createlight(const string& name, const string& id) {
        return make_shared<Light>(name+"Brand B", id); 
    }
shared_ptr<Camera> Brandtwofactory::createcamera(const string& name, const string& id) {
        return make_shared<Camera>(name+"Brand B", id); 
    }
shared_ptr<DoorLock> Brandtwofactory::createdoorlock(const string& name, const string& id) {
        return make_shared<DoorLock>(name+"Brand B", id); 
    }
shared_ptr<Thermostat> Brandtwofactory::createthermostat(const string& name, const string& id) {
        return make_shared<Thermostat>(name+"Brand B", id); 
    }