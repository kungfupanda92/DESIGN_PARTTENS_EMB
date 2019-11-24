#include "PizzaStore.h"
PizzaStore::PizzaStore()
{

}

Pizza *PizzaStore::orderPizza(std::string type)
{
    Pizza *pizza = makePizza(type);

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}
