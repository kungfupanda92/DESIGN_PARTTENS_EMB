#ifndef CHICAGOSTYLECLAMPIZZA_H
#define CHICAGOSTYLECLAMPIZZA_H

#include "Pizza.h"

class ChicagoStyleClamPizza : public Pizza
{
public:
    ChicagoStyleClamPizza();
    void cut() const override;
};

#endif // CHICAGOSTYLECLAMPIZZA_H
