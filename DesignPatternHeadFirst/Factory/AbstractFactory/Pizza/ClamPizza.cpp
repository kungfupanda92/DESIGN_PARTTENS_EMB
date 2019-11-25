#include "ClamPizza.h"
#include <iostream>

ClamPizza::ClamPizza(PizzaIngredientFactory *factory)
{
    this->factory = factory;
}

ClamPizza::~ClamPizza()
{
    if (factory)
        delete factory;
}

void ClamPizza::prepare()
{
     std::cout << "----Preparing " +  name << "----" << std::endl;
    dough = factory->createDough();
    sauce = factory->createSauce();
    cheese = factory->createCheese();
    clam = factory->createClam();
}
