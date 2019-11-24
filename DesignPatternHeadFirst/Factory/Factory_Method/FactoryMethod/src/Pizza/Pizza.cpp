#include "Pizza.h"
#include <iostream>

Pizza::Pizza()
{

}

const std::string Pizza::getName() const
{
    return this->name;
}

void Pizza::prepare() const
{
    std::cout << "Prepare " + getName() << std::endl;
}

void Pizza::bake() const
{
    std::cout << "Bake " + getName() << std:: endl;
}

void Pizza::cut() const
{
    std::cout << "Cut " + getName() << std::endl;
}

void Pizza::box() const
{
    std::cout << "Box " + getName() << std::endl;
}

std::ostream& operator<<(std::ostream &out, const Pizza& pizza)
{
    std::string str;
    str = "\n-----" + pizza.getName() + "---\n";
    str.append(pizza.dough + "\n");
    str.append(pizza.sauce + "\n");

    for (auto& topping : pizza.toppings)
    {
        str.append(topping + "\n");
    }

    str.append("\n");

    return out << str;
}

