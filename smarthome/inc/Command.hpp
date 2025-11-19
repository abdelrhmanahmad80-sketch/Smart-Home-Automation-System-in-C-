#ifndef COMMAND_HPP
#define COMMAND_HPP

#include<memory>
#include"Device.hpp"
using namespace std;

class Command{
    public:
    virtual void execute() = 0;
    virtual void undo() = 0;
    virtual ~Command() = default;
};

#endif