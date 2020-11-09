QT       += core gui network
RC_ICONS = logo.ico
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DiaLogSiemens/dialogmodbusmapblock.cpp \
    DiaLogSiemens/dialogmosbusmapcheck.cpp \
    DiaLogSiemens/dialogsiemensruncheck.cpp \
    DiaLogSiemens/dialogsiemenssetparameter.cpp \
    diafinddef.cpp \
    dialogfindall.cpp \
    dialogruncheck.cpp \
    diamodequipment.cpp \
    diasetip.cpp \
    diatestchat.cpp \
    handleredata.cpp \
    helpApi/mycombox.cpp \
    helpApi/qhelpapi.cpp \
    main.cpp \
    mainwindow.cpp \
    udpserver.cpp \
    update/createnewclient.cpp \
    update/dlogdatachange.cpp \
    update/progressbardelegate.cpp \
    update/saveconfigthread.cpp \
    update/tcpthread.cpp \
    windowupdate.cpp

HEADERS += \
    DiaLogSiemens/dialogmodbusmapblock.h \
    DiaLogSiemens/dialogmosbusmapcheck.h \
    DiaLogSiemens/dialogsiemensruncheck.h \
    DiaLogSiemens/dialogsiemenssetparameter.h \
    diafinddef.h \
    dialogfindall.h \
    dialogruncheck.h \
    diamodequipment.h \
    diasetip.h \
    diatestchat.h \
    handleredata.h \
    helpApi/mycombox.h \
    helpApi/qhelpapi.h \
    mainwindow.h \
    udpserver.h \
    update/createnewclient.h \
    update/dlogdatachange.h \
    update/progressbardelegate.h \
    update/saveconfigthread.h \
    update/tcpthread.h \
    windowupdate.h

FORMS += \
    DiaLogSiemens/dialogmodbusmapblock.ui \
    DiaLogSiemens/dialogmosbusmapcheck.ui \
    DiaLogSiemens/dialogsiemensruncheck.ui \
    DiaLogSiemens/dialogsiemenssetparameter.ui \
    diafinddef.ui \
    dialogfindall.ui \
    dialogruncheck.ui \
    diamodequipment.ui \
    diasetip.ui \
    diatestchat.ui \
    mainwindow.ui \
    update/dlogdatachange.ui \
    windowupdate.ui
#CONFIG += console
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icon.qrc
