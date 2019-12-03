#ifndef VEGGIEPIZZA_H
#define VEGGIEPIZZA_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class VeggiePizza : public Pizza
{
public:
    VeggiePizza(PizzaIngredientFactory *factory);
    virtual ~VeggiePizza() override;
    virtual void prepare() override;

protected:
    PizzaIngredientFactory *factory;
};

#endif // VEGGIEPIZZA_H
