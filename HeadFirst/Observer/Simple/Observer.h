#ifndef OBSERVER_H
#define OBSERVER_H


class Observer
{
public:
    Observer();
    virtual ~Observer() = default;
    virtual void update(int value) = 0;
};

#endif // OBSERVER_H
