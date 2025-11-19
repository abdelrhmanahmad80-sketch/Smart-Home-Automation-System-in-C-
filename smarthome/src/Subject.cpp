#include"Subject.hpp"

void Subject::addobserver(shared_ptr<Observer> o){
    observers.push_back(o);
}

void Subject::removeobserver(shared_ptr<Observer> o){
    for(auto it = observers.begin(); it != observers.end(); ++it){
        if(*it == o){
            observers.erase(it);
            break;
        }
    }
}

void Subject::NotifyAll(const string& event,const string& id){
    for(const auto& observer : observers){
        observer->Notify(event, id);
    }
}