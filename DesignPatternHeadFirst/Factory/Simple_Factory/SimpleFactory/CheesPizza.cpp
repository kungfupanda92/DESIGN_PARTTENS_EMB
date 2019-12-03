#include "CheesPizza.h"

CheesPizza::CheesPizza()
{
  this->name = "CheesPizza";
  this->dough = "Regular crust";
  this->sauce = "Marinara Pizza sauce";
  this->toppings.push_back("Fresh mozzarella");
  this->toppings.push_back("Parmesan");
}