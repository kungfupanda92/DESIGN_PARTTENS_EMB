QT -= gui

CONFIG += c++14 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += \
    $$PWD/src/Pizza \
    $$PWD/src/PizzaStore
SOURCES += \
        main.cpp \
        src/Pizza/ChicagoStyleCheesePizza.cpp \
        src/Pizza/ChicagoStyleClamPizza.cpp \
        src/Pizza/ChicagoStylePepperoniPizza.cpp \
        src/Pizza/ChicagoStyleVeggiePizza.cpp \
        src/Pizza/NYStyleCheesePizza.cpp \
        src/Pizza/NYStyleClamPizza.cpp \
        src/Pizza/NYStylePepperoniPizza.cpp \
        src/Pizza/NYStyleVeggiePizza.cpp \
        src/Pizza/Pizza.cpp \
        src/PizzaStore/ChicagoPizzaStore.cpp \
        src/PizzaStore/NYPizzaStore.cpp \
        src/PizzaStore/PizzaStore.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    src/Pizza/ChicagoStyleCheesePizza.h \
    src/Pizza/ChicagoStyleClamPizza.h \
    src/Pizza/ChicagoStylePepperoniPizza.h \
    src/Pizza/ChicagoStyleVeggiePizza.h \
    src/Pizza/NYStyleCheesePizza.h \
    src/Pizza/NYStyleClamPizza.h \
    src/Pizza/NYStylePepperoniPizza.h \
    src/Pizza/NYStyleVeggiePizza.h \
    src/Pizza/Pizza.h \
    src/PizzaStore/ChicagoPizzaStore.h \
    src/PizzaStore/NYPizzaStore.h \
    src/PizzaStore/PizzaStore.h
