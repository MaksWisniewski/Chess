QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bishop.cpp \
    board.cpp \
    emptyfield.cpp \
    field.cpp \
    game.cpp \
    king.cpp \
    knight.cpp \
    main.cpp \
    mainwindow.cpp \
    pawn.cpp \
    piece.cpp \
    queen.cpp \
    rook.cpp

HEADERS += \
    colour.hpp \
    bishop.hpp \
    board.hpp \
    emptyfield.hpp \
    field.hpp \
    game.hpp \
    king.hpp \
    knight.hpp \
    mainwindow.hpp \
    pawn.hpp \
    piece.hpp \
    pos.hpp \
    queen.hpp \
    rook.hpp

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
