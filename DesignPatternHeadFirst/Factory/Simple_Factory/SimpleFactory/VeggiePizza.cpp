#include "VeggiePizza.h"

VeggiePizza::VeggiePizza()
{
  this->name = "Veggie Pizza";
  this->dough = "Regular crust";
  this->sauce = "Marinara sauce";

  this->toppings.push_back("Shredded mozzarella");
  this->toppings.push_back("Grated Parmesan");
  this->toppings.push_back("Diced onion");
  this->toppings.push_back("Sliced mushrooms");
  this->toppings.push_back("Sliced red pepper");
  this->toppings.push_back("No olives because they're gross");
}
