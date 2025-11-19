#include "Thermostat.hpp"

void Thermostat::SetTargetTemperature(double temp) {
            targetTemperature = temp;
            cout << "Target temperature of " << name << " set to " << targetTemperature << "°C" << endl;
        }

double Thermostat::GetCurrentTemperature() const {
            return currentTemperature;
        }

double Thermostat::GetTargetTemperature() const {
            return targetTemperature;
        }

void Thermostat::TurnOn() {
            cout << name << " thermostat is turned ON. Current: " << currentTemperature << "°C, Target: " << targetTemperature << "°C" << endl;
        }

void Thermostat::TurnOff() {
            cout << name << " thermostat is turned OFF" << endl;
        }