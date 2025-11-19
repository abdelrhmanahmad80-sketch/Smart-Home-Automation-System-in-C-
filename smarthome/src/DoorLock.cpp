#include "DoorLock.hpp"

void DoorLock::Lock() {
            isLocked = true;
            cout << name << " is locked." << endl;
        }

void DoorLock::Unlock() {
            isLocked = false;
            cout << name << " is unlocked." << endl;
        }

bool DoorLock::IsLocked() const {
            return isLocked;
        }

void DoorLock::TurnOn() {
            cout << name << " door lock system is activated." << endl;
        }

void DoorLock::TurnOff() {
            cout << name << " door lock system is deactivated." << endl;
        }