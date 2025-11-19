#include"Camera.hpp"

void Camera::StartRecording() {
            isRecording = true;
            cout << name << " started recording"<<endl;
        }

void Camera::StopRecording() {
            isRecording = false;
            cout << name << " stopped recording" << endl;
        }

void Camera::TurnOn() {
            cout << name << " camera is turned ON " << endl;
        }

void Camera::TurnOff() {
            cout << name << " camera is turned OFF" << endl;
        }