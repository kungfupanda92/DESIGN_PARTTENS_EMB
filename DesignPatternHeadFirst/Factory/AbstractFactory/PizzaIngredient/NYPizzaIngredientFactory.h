#ifndef NYPIZZAINGREDIENTFACTORY_H
#define NYPIZZAINGREDIENTFACTORY_H


#include "PizzaIngredientFactory.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    NYPizzaIngredientFactory();
    Dough *createDough() override;
    Clam *createClam() override;
    std::vector<Veggies *> createVeggies() override;
    Cheese *createCheese() override;
    Sauce *createSauce() override;
    Pepperoni * createPepperoni() override;
};

#endif // NYPIZZAINGREDIENTFACTORY_H
