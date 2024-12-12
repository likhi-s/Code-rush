TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Datatypes.c \
        main.c

DISTFILES += \
    datatypes.md \
    operators.md

HEADERS += \
    datatypes.h
