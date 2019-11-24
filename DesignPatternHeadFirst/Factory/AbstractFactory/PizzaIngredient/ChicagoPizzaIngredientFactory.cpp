#include "ChicagoPizzaIngredientFactory.h"
#include "Veggies/Garlic.h"

ChicagoPizzaIngredientFactory::ChicagoPizzaIngredientFactory()
{

}

Dough *ChicagoPizzaIngredientFactory::createDough()
{
    return new Dough();
}

Clam *ChicagoPizzaIngredientFactory::createClam()
{
    return new Clam();
}

std::vector<Veggies*> ChicagoPizzaIngredientFactory::createVeggies()
{
    std::vector<Veggies*> veggies;
    veggies.push_back(new Garlic());
    return veggies;
}

Cheese *ChicagoPizzaIngredientFactory::createCheese()
{
    return new Cheese();
}

Sauce *ChicagoPizzaIngredientFactory::createSauce()
{
    return new Sauce();
}

Pepperoni *ChicagoPizzaIngredientFactory::createPepperoni()
{
return new Pepperoni();
}

