#include "PepperoniPizza.h"
#include "iostream"

PepperoniPizza::PepperoniPizza(PizzaIngredientFactory *factory)
{
    this->factory = factory;
}

PepperoniPizza::~PepperoniPizza()
{
    if (factory)
        delete factory;
}

void PepperoniPizza::prepare()
{
     std::cout << "----Preparing " +  name << "----" << std::endl;

    dough = factory->createDough();
    sauce = factory->createSauce();
    cheese = factory->createCheese();
    veggies = factory->createVeggies();
    pepperoni = factory->createPepperoni();
}
