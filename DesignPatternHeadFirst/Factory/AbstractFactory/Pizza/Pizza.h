#ifndef PIZZA_H
#define PIZZA_H


#include <string>
#include <vector>

#include "PizzaIngredient/Dough/Dough.h"
#include "PizzaIngredient/Sauce/Sauce.h"
#include "PizzaIngredient/Veggies/Veggies.h"
#include "PizzaIngredient/Clam/Clam.h"
#include "PizzaIngredient/Cheese/Cheese.h"
#include "PizzaIngredient/Pepperoni/Pepperoni.h"

class Pizza
{
public:
    Pizza();
    virtual ~Pizza() = default;

public:
    virtual void prepare() = 0;
    void bake() const;
    void cut() const;
    void box() const;
    std::string getName() const;
    void setName(std::string name);
    void toString() const;

protected:
    std::string name;
    Dough *dough;
    Sauce *sauce;
    Cheese *cheese;
    std::vector<Veggies*> veggies;
    Clam *clam;
    Pepperoni *pepperoni;
};

#endif // PIZZA_H
