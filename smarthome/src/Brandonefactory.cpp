#include "Brandonefactory.hpp"

shared_ptr<Light> Brandonefactory::createlight(const string& name, const string& id)  {
        return make_shared<Light>(name+"Brand A", id); 
    }
    shared_ptr<Camera> Brandonefactory::createcamera(const string& name, const string& id) {
        return make_shared<Camera>(name+"Brand A", id); 
    }
    shared_ptr<DoorLock> Brandonefactory::createdoorlock(const string& name, const string& id) {
        return make_shared<DoorLock>(name+"Brand A", id); 
    }
    shared_ptr<Thermostat> Brandonefactory::createthermostat(const string& name, const string& id) {
        return make_shared<Thermostat>(name+"Brand A", id); 
    }
    shared_ptr<MotionSensor> Brandonefactory::createmotionsensor(const string& name, const string& id) {
        return make_shared<MotionSensor>(name+"Brand A", id); 
    }
    