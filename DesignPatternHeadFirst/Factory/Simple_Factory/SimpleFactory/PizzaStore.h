#ifndef __PizzaStore_h__
#define __PizzaStore_h__

#include "SimplePizzaFactory.h"

class PizzaStore
{
public:
  SimplePizzaFactory factory;
public:
  PizzaStore(SimplePizzaFactory factory);
  std::unique_ptr<Pizza> orderPizza(const std::string& type);
};
#endif /* __PizzaStore_h__ */
