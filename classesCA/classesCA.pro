TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    FiguraGeometrica.cpp \
    Circulo.cpp \
    Reta.cpp \
    Retangulo.cpp

HEADERS += \
    FiguraGeometrica.h \
    Circulo.h \
    Reta.h \
    Retangulo.h
