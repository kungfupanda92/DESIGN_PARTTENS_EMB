#include "NYStyleVeggiePizza.h"

NYStyleVeggiePizza::NYStyleVeggiePizza()
{
    this->name = "NY Style Veggie Pizza";
    this->dough = "Thin crust dough";
    this->sauce = "Marinara sauce";

    this->toppings.push_back("Grated Reggiano Cheese");
    this->toppings.push_back("Garlic");
    this->toppings.push_back("Onion");
    this->toppings.push_back("Mushrooms");
    this->toppings.push_back("Red Pepper");
}
