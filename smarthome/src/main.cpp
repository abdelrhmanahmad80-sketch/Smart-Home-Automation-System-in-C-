#include"Homecontroller.hpp"
#include"Brandonefactory.hpp"
#include"Deviceleaf.hpp"
#include"Motionsensor.hpp"
#include"Lightobserver.hpp"
#include"Cameraobserver.hpp"
#include"Turnoncommand.hpp"

int main() {
cout << "=== Smart Home Demo  ===\n\n";

    auto factory=make_shared<Brandonefactory>();
    auto controller=HomeController::getInstance();
    controller->setFactory(factory);

    auto light1=factory->createlight("L1", "Living Room Light 1");
    auto light2=factory->createlight("L2", "Living Room Light 2");
    auto cam=factory->createcamera("C1", "Living Room Camera");
    auto lock=factory->createdoorlock("D1", "Front Door");
    auto sensor=factory->createmotionsensor("S1", "Hallway Sensor");

    auto leafL1=make_shared<DeviceLeaf>(light1);
    auto leafL2=make_shared<DeviceLeaf>(light2);
    auto leafCam=make_shared<DeviceLeaf>(cam);
    auto leafLock=make_shared<DeviceLeaf>(lock);
    auto leafSensor=make_shared<DeviceLeaf>(sensor);

    controller->registerDevice(leafL1);
    controller->registerDevice(leafL2);
    controller->registerDevice(leafCam);
    controller->registerDevice(leafLock);
    controller->registerDevice(leafSensor);

    auto livingRoom=make_shared<Devicegroup>("LivingRoom");
    livingRoom->add(leafL1);
    livingRoom->add(leafL2);
    livingRoom->add(leafCam);

    controller->registerGroup(livingRoom);

    auto security=make_shared<Devicegroup>("Security");
    security->add(leafCam);
    security->add(leafLock);

    controller->registerGroup(security);

    auto lightObs1=make_shared<LightObserver>(light1);
    auto lightObs2=make_shared<LightObserver>(light2);
    auto camObs=make_shared<CameraObserver>(cam);

    sensor->addobserver(lightObs1);
    sensor->addobserver(lightObs2);
    sensor->addobserver(camObs);

    cout << "\n-- Turning ON Light 2 using Command directly --\n";
    TurnOnCommand on2(light2);
    on2.execute();

    cout << "\n-- Turning OFF entire LivingRoom group --\n";
    livingRoom->turnOff();

    cout << "\n-- Triggering motion sensor --\n";
    sensor->DetectMotion();

    cout << "\n-- Unlocking front door, camera manually records --\n";
    lock->Unlock();
    cam->StartRecording();

    cout << "\n=== Demo Complete ===\n";
    return 0;
}