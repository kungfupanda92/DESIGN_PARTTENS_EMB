TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += \
    $$PWD/Pizza \
    $$PWD/PizzaStore \
    $$PWD/PizzaIngredient \

SOURCES += \
        Pizza/CheesePizza.cpp \
        Pizza/ClamPizza.cpp \
        Pizza/PepperoniPizza.cpp \
        Pizza/Pizza.cpp \
        Pizza/VeggiePizza.cpp \
        PizzaIngredient/Cheese/Cheese.cpp \
        PizzaIngredient/Cheese/MozzarellaCheese.cpp \
        PizzaIngredient/Cheese/ReggianCheese.cpp \
        PizzaIngredient/ChicagoPizzaIngredientFactory.cpp \
        PizzaIngredient/Clam/Clam.cpp \
        PizzaIngredient/Clam/FreshClam.cpp \
        PizzaIngredient/Clam/FrozenClam.cpp \
        PizzaIngredient/Dough/Dough.cpp \
        PizzaIngredient/Dough/ThickCrustDough.cpp \
        PizzaIngredient/Dough/ThinCrusDough.cpp \
        PizzaIngredient/NYPizzaIngredientFactory.cpp \
        PizzaIngredient/Pepperoni/Pepperoni.cpp \
        PizzaIngredient/Pepperoni/SlicedPepperoni.cpp \
        PizzaIngredient/PizzaIngredientFactory.cpp \
        PizzaIngredient/Sauce/MarinaSauce.cpp \
        PizzaIngredient/Sauce/PlumTomato.cpp \
        PizzaIngredient/Sauce/Sauce.cpp \
        PizzaIngredient/Veggies/Garlic.cpp \
        PizzaIngredient/Veggies/Mushroom.cpp \
        PizzaIngredient/Veggies/Onion.cpp \
        PizzaIngredient/Veggies/RedPepper.cpp \
        PizzaIngredient/Veggies/Veggies.cpp \
        PizzaStore/ChicagoPizzaStore.cpp \
        PizzaStore/NYPizzaStore.cpp \
        PizzaStore/PizzaStore.cpp \
        main.cpp

HEADERS += \
    Pizza/CheesePizza.h \
    Pizza/ClamPizza.h \
    Pizza/PepperoniPizza.h \
    Pizza/Pizza.h \
    Pizza/VeggiePizza.h \
    PizzaIngredient/Cheese/Cheese.h \
    PizzaIngredient/Cheese/MozzarellaCheese.h \
    PizzaIngredient/Cheese/ReggianCheese.h \
    PizzaIngredient/ChicagoPizzaIngredientFactory.h \
    PizzaIngredient/Clam/Clam.h \
    PizzaIngredient/Clam/FreshClam.h \
    PizzaIngredient/Clam/FrozenClam.h \
    PizzaIngredient/Dough/Dough.h \
    PizzaIngredient/Dough/ThickCrustDough.h \
    PizzaIngredient/Dough/ThinCrusDough.h \
    PizzaIngredient/NYPizzaIngredientFactory.h \
    PizzaIngredient/Pepperoni/Pepperoni.h \
    PizzaIngredient/Pepperoni/SlicedPepperoni.h \
    PizzaIngredient/PizzaIngredientFactory.h \
    PizzaIngredient/Sauce/MarinaSauce.h \
    PizzaIngredient/Sauce/PlumTomato.h \
    PizzaIngredient/Sauce/Sauce.h \
    PizzaIngredient/Veggies/Garlic.h \
    PizzaIngredient/Veggies/Mushroom.h \
    PizzaIngredient/Veggies/Onion.h \
    PizzaIngredient/Veggies/RedPepper.h \
    PizzaIngredient/Veggies/Veggies.h \
    PizzaStore/ChicagoPizzaStore.h \
    PizzaStore/NYPizzaStore.h \
    PizzaStore/PizzaStore.h
