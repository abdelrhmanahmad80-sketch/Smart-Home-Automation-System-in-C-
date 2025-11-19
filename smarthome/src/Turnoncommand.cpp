#include"Turnoncommand.hpp"

void TurnOnCommand::execute() {
        device->TurnOn();
    }

void TurnOnCommand::undo() {
        device->TurnOff();
    }

    