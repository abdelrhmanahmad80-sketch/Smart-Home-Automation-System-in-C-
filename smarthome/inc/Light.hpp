#ifndef LIGHT_HPP
#define LIGHT_HPP

#include "Device.hpp"
class Light : public Device {
    private:
        int brightness; 
    public:
        Light(const string& name, const string& id, int brightness = 50)
            : Device(name, id), brightness(brightness) {}

        void SetBrightness(int level);

        int GetBrightness() const ;
        void TurnOn() override ;

        void TurnOff() override;
};

#endif