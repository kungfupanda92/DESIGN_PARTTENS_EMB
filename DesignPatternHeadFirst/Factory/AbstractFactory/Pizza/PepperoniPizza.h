#ifndef PEPPERONIPIZZA_H
#define PEPPERONIPIZZA_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class PepperoniPizza : public Pizza
{
public:
    PepperoniPizza(PizzaIngredientFactory *factory);
    virtual ~PepperoniPizza() override;
    virtual void prepare() override;
protected:
    PizzaIngredientFactory *factory;
};

#endif // PEPPERONIPIZZA_H
