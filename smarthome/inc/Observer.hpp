#ifndef OBSERVER_HPP
#define OBSERVER_HPP
#include<iostream>
using namespace std;

class Observer{
    public:
    virtual void Notify(const string& event, const string& id) = 0;
};

#endif