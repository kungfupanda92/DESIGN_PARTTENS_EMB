#ifndef CHICAGOSTYLECHEESEPIZZA_H
#define CHICAGOSTYLECHEESEPIZZA_H

#include "Pizza.h"

class ChicagoStyleCheesePizza : public Pizza
{
public:
    ChicagoStyleCheesePizza();
    void cut() const override;
};

#endif // CHICAGOSTYLECHEESEPIZZA_H
