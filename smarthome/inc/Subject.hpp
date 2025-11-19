#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include"Observer.hpp"
#include<vector>
#include<memory>
using namespace std;

class Subject{
    protected:
    vector<shared_ptr<Observer>> observers;
    public:
    virtual void addobserver(shared_ptr<Observer> o) = 0;
    virtual void removeobserver(shared_ptr<Observer> o) = 0;
    virtual void NotifyAll(const string& event,const string& id) = 0;
};

#endif