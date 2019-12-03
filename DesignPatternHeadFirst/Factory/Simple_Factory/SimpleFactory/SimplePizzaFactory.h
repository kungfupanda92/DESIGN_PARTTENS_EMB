#ifndef __SimplePizzaFactory_h__
#define __SimplePizzaFactory_h__

#include <string>
#include <memory>
#include <iostream>

#include "Pizza.h"

class SimplePizzaFactory
{
public:
  std::unique_ptr<Pizza> createPizza(const std::string& type);
};

#endif /* __SimplePizzaFactory_h__ */
