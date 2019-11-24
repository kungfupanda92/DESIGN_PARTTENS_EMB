#ifndef PIZZAINGREDIENTFACTORY_H
#define PIZZAINGREDIENTFACTORY_H


#include <vector>

#include "Dough/Dough.h"
#include "Cheese/Cheese.h"
#include "Clam/Clam.h"
#include "Veggies/Veggies.h"
#include "Sauce/Sauce.h"
#include "Pepperoni/Pepperoni.h"


class PizzaIngredientFactory
{
public:
    PizzaIngredientFactory();
    virtual ~PizzaIngredientFactory() = default;

    virtual Dough *createDough() = 0;
    virtual Sauce *createSauce() = 0;
    virtual Cheese *createCheese() = 0;
    virtual std::vector<Veggies*> createVeggies() = 0;
    virtual Clam *createClam() = 0;
    virtual Pepperoni * createPepperoni() = 0;
};

#endif // PIZZAINGREDIENTFACTORY_H
