#include <iostream>
#include <string>
#include <vector>

#include "PizzaStore.h"
#include "SimplePizzaFactory.h"
#include "CheesPizza.h"

int main(int argc, char *argv[])
{
    SimplePizzaFactory factory;
    PizzaStore pizzaStore(factory);


    auto pizza = pizzaStore.orderPizza("cheese");
    std::cout << "We ordered a " + pizza->getName() << std::endl;
    std::cout << *pizza << std::endl;

    pizza = pizzaStore.orderPizza("clam");
    std::cout << "We ordered a " + pizza->getName() << std::endl;
    std::cout << *pizza << std::endl;

    return 0;
}
