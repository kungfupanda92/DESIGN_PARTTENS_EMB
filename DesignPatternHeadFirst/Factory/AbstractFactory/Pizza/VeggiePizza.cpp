#include "VeggiePizza.h"
#include <iostream>

VeggiePizza::VeggiePizza(PizzaIngredientFactory *factory)
{
    this->factory = factory;
}

VeggiePizza::~VeggiePizza()
{
    if (factory)
        delete factory;
}

void VeggiePizza::prepare()
{
    std::cout << "----Preparing " +  name << "----" << std::endl;

    dough = factory->createDough();
    sauce = factory->createSauce();
    cheese = factory->createCheese();
    veggies = factory->createVeggies();
}
