#ifndef DOORLOCK_HPP
#define DOORLOCK_HPP

#include "Device.hpp"
class DoorLock : public Device {
    private:
        bool isLocked;
    public:
        DoorLock(const string& name, const string& id)
            : Device(name, id), isLocked(true) {}

        void Lock() ;
        void Unlock() ;

        bool IsLocked() const ;

        void TurnOn() override ;

        void TurnOff() override ;
};

#endif