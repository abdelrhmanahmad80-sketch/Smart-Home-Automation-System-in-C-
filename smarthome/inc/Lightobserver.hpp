#ifndef LIGHTOBSERVER_HPP
#define LIGHTOBSERVER_HPP

#include<memory>
#include"Observer.hpp"
#include"Light.hpp"

class LightObserver : public Observer{
    protected:
    shared_ptr<Light> light;
    public:
    LightObserver(shared_ptr<Light> l) : light(l) {}
    void Notify(const string& event, const string& id) override ;
};

#endif