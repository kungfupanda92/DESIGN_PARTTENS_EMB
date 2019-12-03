#include "PepperoniPizza.h"

PepperoniPizza::PepperoniPizza()
{
  this->name  = "Pepperoni Pizza";
  this->dough = "Regular crust";
  this->sauce = "Marinara Pizza sause";
  this->toppings.push_back("Sliced pepperoni");
  this->toppings.push_back("Sliced onion");
  this->toppings.push_back("Grated parmesan chese");
}
