#include "CheesePizza.h"
#include <iostream>

CheesePizza::CheesePizza(PizzaIngredientFactory *factory)
{
    this->factory = factory;
}

void CheesePizza::prepare()
{
    std::cout << "Prepare " + name;
    dough = factory->createDough();
    sauce = factory->createSauce();
    cheese = factory->createCheese();
}
