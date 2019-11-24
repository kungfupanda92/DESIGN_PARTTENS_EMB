#ifndef PIZZASTORE_H
#define PIZZASTORE_H


#include "Pizza.h"
#include "string"

class PizzaStore
{
public:
    PizzaStore();
    virtual ~PizzaStore() = default;
    Pizza *orderPizza(std::string type);
    virtual Pizza *makePizza(std::string type) = 0;
};

#endif // PIZZASTORE_H
