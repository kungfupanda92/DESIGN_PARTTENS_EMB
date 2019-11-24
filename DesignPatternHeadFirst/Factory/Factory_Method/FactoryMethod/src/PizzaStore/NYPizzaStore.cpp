#include "NYPizzaStore.h"
#include "NYStyleCheesePizza.h"
#include "NYStyleClamPizza.h"
#include "NYStylePepperoniPizza.h"
#include "NYStyleVeggiePizza.h"

NYPizzaStore::NYPizzaStore()
{

}

std::unique_ptr<Pizza> NYPizzaStore::makePizza(std::string type)
{
    std::unique_ptr<Pizza> pizza = nullptr;

    if (type == "cheese")
    {
        pizza = std::make_unique<NYStyleCheesePizza>();
    }
    else if (type == "pepperoni")
    {
        pizza = std::make_unique<NYStylePepperoniPizza>();
    }
    else if (type == "veggie")
    {
        pizza = std::make_unique<NYStyleVeggiePizza>();
    }
    else if (type == "clam")
    {
        pizza = std::make_unique<NYStyleClamPizza>();
    }
    return pizza;
}

