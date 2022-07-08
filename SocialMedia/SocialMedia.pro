QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_admin.cpp \
    add_member.cpp \
    channel.cpp \
    chat.cpp \
    creat_channele.cpp \
    darugram.cpp \
    date.cpp \
    deletemember.cpp \
    forget_pass.cpp \
    main.cpp \
    mainwindow.cpp \
    message.cpp \
    profile.cpp \
    profileelse.cpp \
    pv.cpp \
    register.cpp \
    user.cpp

HEADERS += \
    add_admin.h \
    add_member.h \
    channel.h \
    chat.h \
    creat_channele.h \
    darugram.h \
    date.h \
    deletemember.h \
    forget_pass.h \
    mainwindow.h \
    message.h \
    profile.h \
    profileelse.h \
    pv.h \
    register.h \
    user.h

FORMS += \
    add_admin.ui \
    add_member.ui \
    channel.ui \
    creat_channele.ui \
    darugram.ui \
    deletemember.ui \
    forget_pass.ui \
    mainwindow.ui \
    profile.ui \
    profileelse.ui \
    pv.ui \
    register.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Recources.qrc
