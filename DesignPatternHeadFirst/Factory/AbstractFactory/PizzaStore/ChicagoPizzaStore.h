#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H


#include "PizzaStore.h"

class ChicagoPizzaStore : public PizzaStore
{
public:
    ChicagoPizzaStore();
    Pizza *makePizza(std::string type) override;
};

#endif // CHICAGOPIZZASTORE_H
