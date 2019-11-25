#include "CheesePizza.h"
#include <iostream>

CheesePizza::CheesePizza(PizzaIngredientFactory *factory)
{
    this->factory = factory;
}

CheesePizza::~CheesePizza()
{
    std::cout << std::endl << "Deleted factory" << std::endl;
    if (factory)
        delete factory;
}

void CheesePizza::prepare()
{
     std::cout << "----Preparing " +  name << "----" << std::endl;
    dough = factory->createDough();
    sauce = factory->createSauce();
    cheese = factory->createCheese();
}
