#include "ChicagoStyleCheesePizza.h"
#include <iostream>

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
    this->name = "Chicago style deep dish pizza";
    this->dough = "Extra thick crust dough";
    this->sauce = "Plum tomato sauce";
    toppings.push_back("Shredded mozzarella");
}

void ChicagoStyleCheesePizza::cut() const
{
    std::cout << "Cutting the pizza into square slices";
}
