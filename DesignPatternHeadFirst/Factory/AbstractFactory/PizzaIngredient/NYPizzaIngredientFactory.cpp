#include "NYPizzaIngredientFactory.h"
#include "Veggies/Garlic.h"
NYPizzaIngredientFactory::NYPizzaIngredientFactory()
{

}

Dough *NYPizzaIngredientFactory::createDough()
{
    return new Dough();
}

Clam *NYPizzaIngredientFactory::createClam()
{
    return new Clam();
}

std::vector<Veggies*> NYPizzaIngredientFactory::createVeggies()
{
    std::vector<Veggies*> veggies;
    veggies.push_back(new Garlic);
    return veggies;
}

Cheese *NYPizzaIngredientFactory::createCheese()
{
    return new Cheese();
}

Sauce *NYPizzaIngredientFactory::createSauce()
{
    return new Sauce();
}

Pepperoni *NYPizzaIngredientFactory::createPepperoni()
{
    return new Pepperoni();
}

