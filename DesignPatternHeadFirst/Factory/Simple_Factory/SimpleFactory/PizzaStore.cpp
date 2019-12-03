#include "PizzaStore.h"
#include "Pizza.h"

PizzaStore::PizzaStore(SimplePizzaFactory factory)
{
  this->factory = factory;
}

std::unique_ptr<Pizza> PizzaStore::orderPizza(const std::string& type)
{
  std::unique_ptr<Pizza> pizza = nullptr;

  pizza = this->factory.createPizza(type);
  if (pizza != nullptr)
  {
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
  }
  else
  {
    std::cout << "Not a valid pizza type." << std::endl;
  }
  return pizza;
}
