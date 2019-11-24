#include "ChicagoPizzaStore.h"
#include "ChicagoPizzaIngredientFactory.h"

#include "CheesePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
#include "VeggiePizza.h"

ChicagoPizzaStore::ChicagoPizzaStore()
{

}

Pizza *ChicagoPizzaStore::makePizza(std::string type)
{
    Pizza *pizza = nullptr;

    ChicagoPizzaIngredientFactory *ingredientFactory = new ChicagoPizzaIngredientFactory();

    if (type == "cheese")
    {
        pizza = new CheesePizza(ingredientFactory);
        pizza->setName("Chicago style Cheese Pizza");
    }
    else if (type == "Clam")
    {
        pizza = new ClamPizza(ingredientFactory);
        pizza->setName("Chicago style Clam Pizza");
    }
    else if (type == "pepperoni")
    {
        pizza = new PepperoniPizza(ingredientFactory);
        pizza->setName("Chicago style Pepperoni Pizza");
    }
    else if (type == "veggie")
    {
        pizza = new VeggiePizza(ingredientFactory);
        pizza->setName("Chicago style Veggie Pizza");
    }
    return pizza;
}

