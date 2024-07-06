QT       += core gui sql \
    quick
    QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    forthpage.cpp \
    home.cpp \
    jobpage.cpp \
    main.cpp \
    mainwindow.cpp \
    mepage.cpp \
    messaging.cpp \
    network.cpp \
    postpage.cpp \
    secondpage.cpp \ 
    thirdpage.cpp

HEADERS += \
    forthpage.h \
    home.h \
    jobpage.h \
    mainwindow.h \
    mepage.h \
    messaging.h \
    network.h \
    postpage.h \
    secondpage.h \
    thirdpage.h

FORMS += \
    forthpage.ui \
    home.ui \
    jobpage.ui \
    mainwindow.ui \
    mepage.ui \
    messaging.ui \
    network.ui \
    postpage.ui \
    secondpage.ui \
    thirdpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Backg.qrc \
    Network.qrc \
    again.qrc \
    background.qrc \
    blackback.qrc \
    capcha2.qrc \
    captchs.qrc \
    darkmood.qrc \
    iconnn.qrc \
    icons.qrc \
    icons.qrc \
    imag.qrc \
    image2.qrc \
    image3.qrc \
    image4.qrc \
    linkdin.qrc \
    menwomen.qrc \
    photo5.qrc \
    photo6.qrc \
    pictureicons.qrc
