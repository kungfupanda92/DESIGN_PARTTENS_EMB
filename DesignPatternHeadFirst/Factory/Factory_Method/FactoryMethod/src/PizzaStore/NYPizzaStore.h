#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H

#include "PizzaStore.h"

class NYPizzaStore : public PizzaStore
{
public:
    NYPizzaStore();
    std::unique_ptr<Pizza> makePizza(std::string type) override;
};

#endif // NYPIZZASTORE_H
