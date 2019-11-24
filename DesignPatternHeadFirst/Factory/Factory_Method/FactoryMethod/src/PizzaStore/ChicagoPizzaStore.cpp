#include "ChicagoPizzaStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleClamPizza.h"
#include "ChicagoStylePepperoniPizza.h"
#include "ChicagoStyleVeggiePizza.h"

ChicagoPizzaStore::ChicagoPizzaStore()
{

}

std::unique_ptr<Pizza> ChicagoPizzaStore::makePizza(std::string type)
{
    std::unique_ptr<Pizza> pizza = nullptr;

    if (type == "cheese")
    {
        pizza = std::make_unique<ChicagoStyleCheesePizza>();
    }
    else if (type == "clam")
    {
        pizza = std::make_unique<ChicagoStyleClamPizza>();
    }
    else if (type == "pepperoni")
    {
        pizza = std::make_unique<ChicagoStylePepperoniPizza>();
    }
    else if (type == "veggie")
    {
        pizza = std::make_unique<ChicagoStyleVeggiePizza>();
    }
    return pizza;
}
