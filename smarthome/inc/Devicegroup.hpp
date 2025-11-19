#ifndef DEVICEGROUP_HPP
#define DEVICEGROUP_HPP

#include"Devicecomponent.hpp"
#include<vector>
#include<memory>

class Devicegroup : public DeviceComponent {
    private:
        vector<shared_ptr<DeviceComponent>> components;
        string name;
    public:
        Devicegroup(const string& groupName) : name(groupName) {}
        void add(const shared_ptr<DeviceComponent>& component) ;

        void remove(const shared_ptr<DeviceComponent>& component) ;

        void turnOn() override ;

        void turnOff() override ;

        string getId() const override ;
        string getName() const override ;
};
#endif