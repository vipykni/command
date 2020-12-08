QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
    simpleremotecontrol.cpp \
    command.cpp \
    lightoncommand.cpp \
    light.cpp \
    garagedoor.cpp \
    garagedooropencommand.cpp \
    lightoffcommand.cpp \
    garagedoorclosecommand.cpp \
    tv.cpp \
    tvoffcommand.cpp \
    tvoncommand.cpp \
    ceilingfan.cpp \
    ceilingfanoffcommand.cpp \
    ceilingfanoncommand.cpp \
    hottub.cpp \
    hottuboffcommand.cpp \
    hottuboncommand.cpp \
    nocommand.cpp \
    remotecontrol.cpp \
    stereo.cpp \
    stereooffcommand.cpp \
    stereooncommand.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    simpleremotecontrol.h \
    command.h \
    lightoncommand.h \
    light.h \
    garagedoor.h \
    garagedooropencommand.h \
    lightoffcommand.h \
    garagedoorclosecommand.h \
    tv.h \
    tvoffcommand.h \
    tvoncommand.h \
    ceilingfan.h \
    ceilingfanoffcommand.h \
    ceilingfanoncommand.h \
    hottub.h \
    hottuboffcommand.h \
    hottuboncommand.h \
    nocommand.h \
    remotecontrol.h \
    stereo.h \
    stereooffcommand.h \
    stereooncommand.h
