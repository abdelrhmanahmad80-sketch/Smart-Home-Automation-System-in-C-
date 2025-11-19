#include"Lightobserver.hpp"

void LightObserver::Notify(const string& event, const string& id) {
        if(event == "MotionDetected"){
            light->TurnOn();
            cout << "LightObserver: Motion detected by sensor " << id << ". Turning on the light." << endl;
        } else if(event == "MotionCleared"){
            light->TurnOff();
            cout << "LightObserver: Motion cleared by sensor " << id << ". Turning off the light." << endl;
        }
    }