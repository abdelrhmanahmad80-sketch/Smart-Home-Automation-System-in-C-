#ifndef CAMERA_HPP
#define CAMERA_HPP

#include "Device.hpp"

class Camera : public Device {
    private:
        bool isRecording;
    public:
        Camera(const string& name, const string& id, const string& res = "1080p")
            : Device(name, id), isRecording(false) {}

        void StartRecording() ;

        void StopRecording() ;

        void TurnOn() override ;

        void TurnOff() override ;
};
#endif