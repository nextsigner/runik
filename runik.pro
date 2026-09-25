TARGET = runik_exec
DESTDIR = $$PWD/bin

QT += quick sql core gui

# Evita APIs obsoletas
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

SOURCES += \
        androidshare.cpp \
        main.cpp \
        qmlerrorlogger.cpp \
        row.cpp \
        swissephmanager.cpp \
        ul.cpp \
        unikargsproc.cpp \
        unikqprocess.cpp

RESOURCES += qml.qrc

# Rutas de importación QML
QML_IMPORT_PATH =
QML_DESIGNER_IMPORT_PATH =

# --- INCLUSIÓN DE PLATAFORMAS ---

# Si estamos compilando para Android:
android {
    include(android.pri)
}

# Si estamos en Linux pero NO es Android (Desktop):
unix:!android:!macx {
    include(linux.pri)
}

# Reglas de despliegue por defecto
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    androidshare.h \
    qmlclipboardadapter.h \
    qmlerrorlogger.h \
    row.h \
    swissephmanager.h \
    ul.h \
    unikargsproc.h \
    unikqprocess.h


###-----QUAZIP----->###
# Añade core5compat a los módulos de Qt requeridos
QT += core gui

INCLUDEPATH += /usr/local/zlib/include
INCLUDEPATH += $$PWD/quazip   # <-- Importante para que los .cpp encuentren los headers internos
INCLUDEPATH += $$PWD/quazip
HEADERS += $$PWD/quazip/*.h

HEADERS += $$PWD/quazip/*.h
SOURCES += $$PWD/quazip/*.cpp
SOURCES += $$PWD/quazip/*.c
###<-----QUAZIP-----###

DISTFILES += \
    android/AndroidManifest.xml \
    android/build.gradle \
    android/res/values/libs.xml \
    android/res/xml/qtprovider_paths.xml

contains(ANDROID_TARGET_ARCH,arm64-v8a) {
    ANDROID_PACKAGE_SOURCE_DIR = \
        $$PWD/android
}
#android: include(/home/ns/Android/Sdk/android_openssl/openssl.pri)
