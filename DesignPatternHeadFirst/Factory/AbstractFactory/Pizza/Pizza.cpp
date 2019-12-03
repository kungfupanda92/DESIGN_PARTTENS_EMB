#include "Pizza.h"
#include <iostream>

Pizza::Pizza()
{

}

void Pizza::setName(std::string name)
{
    this->name = name;
}

std::string Pizza::getName() const
{
    return name;
}

void Pizza::bake() const
{
    std::cout << "Bake for 25 minutes at 350" << std::endl;
}

void Pizza::cut() const
{
    std::cout << "Cut the pizza into diagonal slices" << std::endl;
}

void Pizza::box() const
{
    std::cout << "Place pizza in official PizzaStore box" << std::endl;
}

void Pizza::toString() const
{
    std::cout << "Print out the pizza spec" << std::endl;
}
