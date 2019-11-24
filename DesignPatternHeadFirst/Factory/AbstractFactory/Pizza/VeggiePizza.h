#ifndef VEGGIEPIZZA_H
#define VEGGIEPIZZA_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class VeggiePizza : public Pizza
{
public:
    VeggiePizza(PizzaIngredientFactory *factory);
    void prepare() override;

protected:
    PizzaIngredientFactory *factory;
};

#endif // VEGGIEPIZZA_H
