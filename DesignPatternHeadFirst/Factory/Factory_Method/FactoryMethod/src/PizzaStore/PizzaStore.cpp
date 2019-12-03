#include "PizzaStore.h"
#include <iostream>

PizzaStore::PizzaStore()
{

}

std::unique_ptr<Pizza> PizzaStore::orderPizza(std::string type)
{
    auto pizza = makePizza(type);

    if (pizza != nullptr)
    {
        std::cout << "\n--- Making a " + pizza->getName() +  "---";
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
    }
    else
    {
        std::cout << "Not a valid pizza type." << std::endl;
    }
    return pizza;
}
