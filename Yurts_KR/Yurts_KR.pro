QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    areawindow.cpp \
    fileio.cpp \
    main.cpp \
    mainwindow.cpp \
    volumewindow.cpp

HEADERS += \
    areawindow.h \
    fileio.h \
    mainwindow.h \
    volumewindow.h

FORMS += \
    areawindow.ui \
    mainwindow.ui \
    volumewindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
