QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chatpage.cpp \
    chat.cpp \
    date.cpp \
    group.cpp \
    forget_pass.cpp \
    main.cpp \
    mainwindow.cpp \
    message.cpp \
    register.cpp \
    user.cpp

HEADERS += \
    chatpage.h \
    chat.h \
    date.h \
    group.h \
    forget_pass.h \
    mainwindow.h \
    message.h \
    register.h \
    user.h

FORMS += \
    chatpage.ui \
    forget_pass.ui \
    mainwindow.ui \
    register.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
