#include "NYPizzaStore.h"
#include "ChicagoPizzaIngredientFactory.h"
#include "NYPizzaIngredientFactory.h"

#include "CheesePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
#include "VeggiePizza.h"
NYPizzaStore::NYPizzaStore()
{

}

Pizza *NYPizzaStore::makePizza(std::string type)
{
    Pizza *pizza = nullptr;
//    PizzaIngredientFactory *factory = new NYPizzaIngredientFactory();

//    if (type == "clam")
//    {
//        pizza = new ClamPizza(factory);
//        pizza->setName("New York style Clam Pizza");
//    }
//    else if (type == "cheese")
//    {
//        pizza = new CheesePizza(factory);
//        pizza->setName("New Yord style Cheese Pizza");
//    }
//    else if (type == "veggie")
//    {
//        pizza = new VeggiePizza(factory);
//        pizza->setName("New York style Veggie Pizza");
//    }
//    else if (type == "pepperoni")
//    {
//        pizza = new PepperoniPizza(factory);
//        pizza->setName("New York style Pepperoni Pizza");
//    }
//    return pizza;
}
