#include"Cameraobserver.hpp"

void CameraObserver::Notify(const string& event, const string& id) {
        if(event == "MotionDetected"){
            camera->StartRecording();
            cout << "CameraObserver: Motion detected by sensor " << id << ". Starting camera recording." << endl;
        } else if(event == "MotionCleared"){
            camera->StopRecording();
            cout << "CameraObserver: Motion cleared by sensor " << id << ". Stopping camera recording." << endl;
        }
    }

