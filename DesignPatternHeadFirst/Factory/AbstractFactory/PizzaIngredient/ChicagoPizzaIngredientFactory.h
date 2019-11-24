#ifndef CHICAGOPIZZAINGREDIENTFACTORY_H
#define CHICAGOPIZZAINGREDIENTFACTORY_H


#include "PizzaIngredientFactory.h"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    ChicagoPizzaIngredientFactory();
    Dough *createDough() override;
    Clam *createClam() override;
    std::vector<Veggies *> createVeggies() override;
    Cheese *createCheese() override;
    Sauce *createSauce() override;
    Pepperoni * createPepperoni() override;
};

#endif // CHICAGOPIZZAINGREDIENTFACTORY_H
