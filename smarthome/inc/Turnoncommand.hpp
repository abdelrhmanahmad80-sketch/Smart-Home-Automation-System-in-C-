#ifndef TURNONCOMMAND_HPP
#define TURNONCOMMAND_HPP

#include"Command.hpp"
#include"Device.hpp"
#include<memory>
using namespace std;

class TurnOnCommand : public Command{
    private:
    shared_ptr<Device> device;
    public:
    TurnOnCommand(shared_ptr<Device> dev) : device(dev) {}
    void execute() override ;
    void undo() override ;
};

#endif