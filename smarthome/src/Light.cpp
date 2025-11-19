#include "Light.hpp"

void Light::SetBrightness(int level) {
            if (level < 0) level = 0;
            if (level > 100) level = 100;
            brightness = level;
            cout << "Brightness of " << name << " set to " << brightness << "%" << endl;
        }

int Light::GetBrightness() const {
        return brightness;
        }

void Light::TurnOn() {
            cout << name << " is turned ON with brightness " << brightness << "%" << endl;
        }

void Light::TurnOff() {
            cout << name << " is turned OFF" << endl;
        }