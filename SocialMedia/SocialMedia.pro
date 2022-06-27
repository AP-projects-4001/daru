QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
<<<<<<< HEAD
    chatpage.cpp \
=======
    chat.cpp \
>>>>>>> aebfdb15cd57cffafebec645bd92ca8ff0bceb68
    date.cpp \
    forget_pass.cpp \
    main.cpp \
    mainwindow.cpp \
    message.cpp \
    register.cpp \
    user.cpp

HEADERS += \
<<<<<<< HEAD
    chatpage.h \
=======
    chat.h \
>>>>>>> aebfdb15cd57cffafebec645bd92ca8ff0bceb68
    date.h \
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
