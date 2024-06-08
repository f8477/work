QT       += core gui sql \
    quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fifthpage.cpp \
    forthpage.cpp \
    jobpage.cpp \
    main.cpp \
    mainwindow.cpp \
    mepage.cpp \
    messaging.cpp \
    network.cpp \
    secondpage.cpp \ 
    thirdpage.cpp

HEADERS += \
    fifthpage.h \
    forthpage.h \
    jobpage.h \
    mainwindow.h \
    mepage.h \
    messaging.h \
    network.h \
    secondpage.h \
    thirdpage.h

FORMS += \
    fifthpage.ui \
    forthpage.ui \
    jobpage.ui \
    mainwindow.ui \
    mepage.ui \
    messaging.ui \
    network.ui \
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
    iconnn.qrc \
    icons.qrc \
    icons.qrc \
    imag.qrc \
    image2.qrc \
    image3.qrc \
    image4.qrc \
    linkdin.qrc \
    photo5.qrc \
    photo6.qrc \
    pictureicons.qrc