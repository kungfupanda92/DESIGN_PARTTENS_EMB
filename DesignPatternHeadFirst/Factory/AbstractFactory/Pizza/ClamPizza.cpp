#include "ClamPizza.h"
#include <iostream>

ClamPizza::ClamPizza(PizzaIngredientFactory *factory)
{
    this->factory = factory;
}

void ClamPizza::prepare()
{
    std::cout << "Preparing " + name;
    dough = factory->createDough();
    sauce = factory->createSauce();
    cheese = factory->createCheese();
    clam = factory->createClam();
}
