#ifndef MOTIONSENSOR_HPP
#define MOTIONSENSOR_HPP

#include "Device.hpp"
#include "Subject.hpp"

class MotionSensor : public Subject, public Device {
    private:
        string name;
        string id;
        bool motionDetected;
    public:
        MotionSensor(const string& name, const string& id)
            : Device(name,id), motionDetected(false) {}

        void DetectMotion() ;

        void ClearMotion() ;

        bool IsMotionDetected() const ;

        void TurnOn() override;

        void TurnOff() override;

        void addobserver(shared_ptr<Observer> o) override {
            observers.push_back(o);
        }
        void removeobserver(shared_ptr<Observer> o) override {
            for(auto it = observers.begin(); it != observers.end(); ++it) {
                if(*it == o) {
                    observers.erase(it);
                    break;
                }
            }
        }
        void NotifyAll(const string& event,const string& id) override {
            for (const auto& observer : observers) {
                observer->Notify(event, id);
            }
        }

};

#endif