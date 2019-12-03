#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <vector>

class Pizza
{
public:
    Pizza();
    virtual ~Pizza() = default;
public:
    std::string name;
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;

    const std::string getName() const;
    virtual void prepare() const;
    virtual void bake() const;
    virtual void cut() const;
    virtual void box() const;

    friend std::ostream& operator<<(std::ostream &out, const Pizza& pizza);
};

#endif // PIZZA_H
