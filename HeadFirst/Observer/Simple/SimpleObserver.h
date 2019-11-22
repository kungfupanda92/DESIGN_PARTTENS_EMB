#ifndef SIMPLEOBSERVER_H
#define SIMPLEOBSERVER_H

#include "Observer.h"
#include "Subject.h"

class SimpleObserver : public Observer
{
public:
    SimpleObserver(Subject& subject);
    virtual void update(int value) override;
    void display() const;

private:
    int value;
    Subject& simpleSubject;
};

#endif // SIMPLEOBSERVER_H
