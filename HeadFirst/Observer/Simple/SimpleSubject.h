#ifndef SIMPLESUBJECT_H
#define SIMPLESUBJECT_H


#include "Subject.h"
#include "Observer.h"
#include <vector>

class SimpleSubject : public Subject
{
private:
    int value=0;
    std::vector<Observer*> observers;
public:
    SimpleSubject();
    void setValue(int value);
    virtual void registerObserver(Observer* ob) override;
    virtual void removeObserver(Observer* ob) override;
    virtual void notifyObservers() override;
};

#endif // SIMPLESUBJECT_H
