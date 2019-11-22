TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    Observer.cpp \
    SimpleObserver.cpp \
    Subject.cpp \
    SimpleSubject.cpp

HEADERS += \
    Observer.h \
    SimpleObserver.h \
    Subject.h \
    SimpleSubject.h
