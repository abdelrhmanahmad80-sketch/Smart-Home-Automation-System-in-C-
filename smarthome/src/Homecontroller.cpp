#include"Homecontroller.hpp"

HomeController* HomeController::instance_ = nullptr;
int HomeController::counter_ = 0;

HomeController* HomeController::getInstance() {
        if (counter_ == 0) {
            instance_ = new HomeController();
            counter_++;
            cout << "HomeController created" << endl;
            return instance_;
        }
        cout << "HomeController already created" << endl;
        return instance_;
    }

void HomeController::setFactory(shared_ptr<DeviceFactory> factory) {
        factory_ = factory;
    }
    void HomeController::registerDevice(shared_ptr<DeviceLeaf> leaf) {
        devices_[leaf->getId()] = leaf;
    }

    void HomeController::registerGroup(shared_ptr<Devicegroup> group) {
        groups_[group->getName()] = group;
    }

    shared_ptr<DeviceLeaf> HomeController::getDevice(const string& id) {
        if (devices_.count(id)) return devices_[id];
        return nullptr;
    }

    shared_ptr<Devicegroup> HomeController::getGroup(const string& name) {
        if (groups_.count(name)) return groups_[name];
        return nullptr;
    }
