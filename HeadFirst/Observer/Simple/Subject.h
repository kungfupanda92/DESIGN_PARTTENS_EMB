#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"
class Subject
{
public:
    Subject();
    virtual ~Subject() = default;
    virtual void registerObserver(Observer* ob) = 0;
    virtual void removeObserver(Observer* ob) = 0;
    virtual void notifyObservers() = 0;
};

#endif // SUBJECT_H
