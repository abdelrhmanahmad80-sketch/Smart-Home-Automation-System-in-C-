#include"Devicegroup.hpp"

void Devicegroup::add(const shared_ptr<DeviceComponent>& component) {
            components.push_back(component);
        }

void Devicegroup::remove(const shared_ptr<DeviceComponent>& component) {
            
            for(auto it = components.begin(); it != components.end(); ++it) {
                if(*it == component) {
                    components.erase(it);
                    break;
                }
            }
        }

void Devicegroup::turnOn()  {
    cout << "Group " << name << " → turnOn"<<endl;
            for (const auto& component : components) {
                component->turnOn();
            }
        }

void Devicegroup::turnOff() {
    cout << "Group " << name << " → turnOff"<<endl;
            for (const auto& component : components) {
                component->turnOff();
            }
        }

string Devicegroup::getId() const {
            return "Group";
        }

string Devicegroup::getName() const {
            return "Device Group";
        }