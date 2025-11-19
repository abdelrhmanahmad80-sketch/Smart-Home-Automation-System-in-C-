#include"Deviceleaf.hpp"

void DeviceLeaf::turnOn() {
            device->TurnOn();
        }
void DeviceLeaf::turnOff() {
            device->TurnOff();
        }

string DeviceLeaf::getId() const {
            return device->getId();
        }

string DeviceLeaf::getName() const {
            return device->getName();
        }

