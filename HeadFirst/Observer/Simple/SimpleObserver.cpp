#include "SimpleObserver.h"
#include <iostream>

SimpleObserver::SimpleObserver(Subject& subject) : simpleSubject(subject)
{
    this->simpleSubject = simpleSubject;
    simpleSubject.registerObserver(this);
}

void SimpleObserver::update(int value)
{
    this->value = value;
    display();
}

void SimpleObserver::display() const
{
    std::cout << "Value: " << value << std::endl;
}
