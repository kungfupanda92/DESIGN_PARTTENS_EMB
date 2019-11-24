#include <iostream>
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"

int main(int argc, char *argv[])
{
    PizzaStore *nyPizzaStore = new NYPizzaStore ;
    ChicagoPizzaStore chicagoPizzaStore;

    auto pizza = nyPizzaStore->orderPizza("cheese");
    std::cout << "Cody ordered a " + pizza->getName() << std::endl;

    pizza = chicagoPizzaStore.orderPizza("cheese");
    std::cout << "Nguyen ordered a " + pizza->getName() << std::endl;

}

