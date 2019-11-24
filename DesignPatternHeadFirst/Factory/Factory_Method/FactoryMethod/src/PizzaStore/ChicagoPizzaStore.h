#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H

#include "PizzaStore.h"
class ChicagoPizzaStore : public PizzaStore
{
public:
    ChicagoPizzaStore();
    std::unique_ptr<Pizza> makePizza(std::string type) override;
};

#endif // CHICAGOPIZZASTORE_H
