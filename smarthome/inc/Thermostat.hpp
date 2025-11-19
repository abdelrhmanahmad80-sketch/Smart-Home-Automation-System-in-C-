#ifndef THERMOSTAT_HPP
#define THERMOSTAT_HPP

#include "Device.hpp"

class Thermostat : public Device {
    private:
        double currentTemperature;
        double targetTemperature;
    public:
        Thermostat(const string& name, const string& id, double currentTemp = 20.0, double targetTemp = 22.0)
            : Device(name, id), currentTemperature(currentTemp), targetTemperature(targetTemp) {}

        void SetTargetTemperature(double temp) ;

        double GetCurrentTemperature() const ;
        double GetTargetTemperature() const ;

        void TurnOn() override ;

        void TurnOff() override ;
};
#endif