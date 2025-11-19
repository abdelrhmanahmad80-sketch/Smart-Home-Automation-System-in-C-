#include"Motionsensor.hpp"

void MotionSensor::DetectMotion() {
            motionDetected = true;
            cout << name << " detected motion." << endl;
            NotifyAll("MotionDetected", id);
        }

void MotionSensor::ClearMotion() {
            motionDetected = false;
            cout << name << " cleared motion detection." << endl;
            NotifyAll("MotionCleared", id);
        }

bool MotionSensor::IsMotionDetected() const {
            return motionDetected;
        }

void MotionSensor::TurnOn() {
            cout << name << " is turned on." << endl;
        }

void MotionSensor::TurnOff() {
            cout << name << " is turned off." << endl;
        }