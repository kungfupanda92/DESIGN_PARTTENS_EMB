#include "PepperoniPizza.h"
#include "iostream"

PepperoniPizza::PepperoniPizza(PizzaIngredientFactory *factory)
{
    this->factory = factory;
}

void PepperoniPizza::prepare()
{
    std::cout << "Preparing " + name;

    dough = factory->createDough();
    sauce = factory->createSauce();
    cheese = factory->createCheese();
    veggies = factory->createVeggies();
    pepperoni = factory->createPepperoni();
}
