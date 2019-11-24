#ifndef CLAMPIZZA_H
#define CLAMPIZZA_H


#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class ClamPizza : public Pizza
{
public:
    ClamPizza(PizzaIngredientFactory *factory);
    void prepare() override;
protected:
    PizzaIngredientFactory *factory;
};

#endif // CLAMPIZZA_H
