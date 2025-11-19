#ifndef HOMECONTROLLER_HPP
#define HOMECONTROLLER_HPP

#include"Devicefactory.hpp"
#include"Deviceleaf.hpp"
#include"Devicegroup.hpp"
#include<iostream>
#include <map>
#include <memory>
using namespace std;

class HomeController {
    private:
    map<string, shared_ptr<DeviceLeaf>> devices_;
    map<string, shared_ptr<Devicegroup>> groups_;
    shared_ptr<DeviceFactory> factory_;
    static HomeController* instance_;
    static int counter_;
    public:
    static HomeController* getInstance();

    void setFactory(shared_ptr<DeviceFactory> factory) ;
    void registerDevice(shared_ptr<DeviceLeaf> leaf) ;

    void registerGroup(shared_ptr<Devicegroup> group) ;

    shared_ptr<DeviceLeaf> getDevice(const string& id) ;

    shared_ptr<Devicegroup> getGroup(const string& name) ;

};

#endif