#ifndef CAMERAOBSERVER_HPP
#define CAMERAOBSERVER_HPP

#include"Observer.hpp"
#include<memory>
#include"Camera.hpp"
using namespace std;
class CameraObserver : public Observer{
    protected:
    shared_ptr<Camera> camera;
    public:
    CameraObserver(shared_ptr<Camera> cam) : camera(cam) {}
    void Notify(const string& event, const string& id) override ;
};

#endif