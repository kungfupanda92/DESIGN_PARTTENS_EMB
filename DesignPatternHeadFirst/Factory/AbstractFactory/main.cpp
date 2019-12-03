#include <iostream>
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"

using namespace std;

int main()
{
    PizzaStore *nyStore = new NYPizzaStore();
    PizzaStore *chicagoStore = new ChicagoPizzaStore();

    Pizza *pizza = nyStore->orderPizza("cheese");
    std::cout << "Cody ordered a " << pizza->getName() << std::endl;

    Pizza *pizza2 = chicagoStore->orderPizza("cheese");
    std::cout << "Ali ordered a " << pizza2->getName() << std::endl;



    delete pizza;
    delete pizza2;
    delete nyStore;
    delete chicagoStore;
    return 0;
}
