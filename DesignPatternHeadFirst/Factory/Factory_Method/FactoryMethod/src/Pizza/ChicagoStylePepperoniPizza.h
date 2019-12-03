#ifndef CHICAGOSTYLEPEPPERONIPIZZA_H
#define CHICAGOSTYLEPEPPERONIPIZZA_H

#include "Pizza.h"
class ChicagoStylePepperoniPizza : public Pizza
{
public:
    ChicagoStylePepperoniPizza();
    void cut() const override;
};

#endif // CHICAGOSTYLEPEPPERONIPIZZA_H
