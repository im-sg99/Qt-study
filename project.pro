QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Block.cpp \
    Game.cpp \
    Player.cpp \
    bomb.cpp \
    main.cpp \
    villagemapgenerator.cpp \
    virtualmapgenerator.cpp \
    fileutilities.cpp \
    dao.cpp \
    virtualplayer.cpp \
    bazzi.cpp

HEADERS += \
    Block.h \
    Game.h \
    Player.h \
    bomb.h \
    villagemapgenerator.h \
    virtualmapgenerator.h \
    fileutilities.h \
    dao.h \
    virtualplayer.h \
    bazzi.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
