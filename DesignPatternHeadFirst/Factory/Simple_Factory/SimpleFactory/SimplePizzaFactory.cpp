#include "SimplePizzaFactory.h"
#include "CheesPizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
#include "VeggiePizza.h"

std::unique_ptr<Pizza> SimplePizzaFactory::createPizza(const std::string& type)
{
  std::unique_ptr<Pizza> pizza = nullptr;

  if (type == "cheese")
  {
    pizza = std::make_unique<CheesPizza>();
  }
  else if (type == "clam")
  {
    pizza = std::make_unique<ClamPizza>();
  }
  else if (type == "pepperoni")
  {
    pizza = std::make_unique<PepperoniPizza>();
  }
  else if (type == "veggie")
  {
    pizza = std::make_unique<VeggiePizza>();
  }
  return pizza;
}
