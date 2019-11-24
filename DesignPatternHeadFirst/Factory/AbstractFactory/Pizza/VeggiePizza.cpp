#include "VeggiePizza.h"
#include <iostream>

VeggiePizza::VeggiePizza(PizzaIngredientFactory *factory)
{
    this->factory = factory;
}

void VeggiePizza::prepare()
{
    std::cout << "Preparing " +  name;

    dough = factory->createDough();
    sauce = factory->createSauce();
    cheese = factory->createCheese();
    veggies = factory->createVeggies();
}
