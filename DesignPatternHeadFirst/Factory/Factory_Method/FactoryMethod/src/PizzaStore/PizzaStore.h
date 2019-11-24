#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include <string>
#include <memory>
#include "Pizza.h"

class PizzaStore
{
public:
    PizzaStore();
    virtual ~PizzaStore() = default;
public:
    std::unique_ptr<Pizza> orderPizza(std::string type);
    virtual std::unique_ptr<Pizza> makePizza(std::string type) = 0;
};

#endif // PIZZASTORE_H
