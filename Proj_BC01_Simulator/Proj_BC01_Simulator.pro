QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../BC01_GENERIC_POINT/BC01_GENERIC_POINT.c \
    ../BC02_POINT_TYPA/BC02_POINT_TYPA.c \
    ../inc/os_warapper.c \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../BC01_GENERIC_POINT/BC01_GENERIC_POINT.h \
    ../BC01_GENERIC_POINT/BC01_GENERIC_POINT_intern.h \
    ../BC02_POINT_TYPA/BC02_POINT_TYPA.h \
    ../inc/s_api_inc.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
