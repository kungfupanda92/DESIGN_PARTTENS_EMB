#include "ChicagoStyleClamPizza.h"
#include <iostream>
ChicagoStyleClamPizza::ChicagoStyleClamPizza()
{
    this->name = "Chicago Style Clam Pizza";
    this->dough = "Extra Thick Crust Dough";
    this->sauce = "Plum Tomato Sauce";

    toppings.push_back("Shredded Mozzarella Cheese");
    toppings.push_back("Frozen Clams from Chesapeake Bay");
}

void ChicagoStyleClamPizza::cut() const
{
    std::cout << "Cutting the pizza into spuare slices";
}
