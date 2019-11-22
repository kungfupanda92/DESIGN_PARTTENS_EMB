#include "SimpleSubject.h"
#include <algorithm>

SimpleSubject::SimpleSubject()
{

}

void SimpleSubject::registerObserver(Observer* ob)
{
    this->observers.push_back(ob);
}

void SimpleSubject::removeObserver(Observer* ob)
{
    auto it = std::find(observers.begin(), observers.end(), ob);
    if (it != observers.end())
    {
        observers.erase(it);
    }
}

void SimpleSubject::notifyObservers()
{
    for (auto observer : observers)
    {
        observer->update(value);
    }
}

void SimpleSubject::setValue(int value)
{
    this->value = value;
    notifyObservers();
}
