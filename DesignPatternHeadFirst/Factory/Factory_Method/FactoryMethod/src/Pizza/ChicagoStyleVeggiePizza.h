#ifndef CHICAGOSTYLEVEGGIEPIZZA_H
#define CHICAGOSTYLEVEGGIEPIZZA_H

#include "Pizza.h"

class ChicagoStyleVeggiePizza : public Pizza
{
public:
    ChicagoStyleVeggiePizza();
    void cut() const override;
};

#endif // CHICAGOSTYLEVEGGIEPIZZA_H
