#-------------------------------------------------
#
# Project created by QtCreator 2014-05-04T16:19:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MUSB
TEMPLATE = app


SOURCES += main.cpp\
        musb.cpp \
    core.c \
    descriptor.c \
    hotplug.c \
    hotplugtest.c \
    io.c \
    strerror.c \
    sync.c \
    os/poll_windows.c \
    os/threads_windows.c \
    os/windows_usb.c

HEADERS  += musb.h \
    config.h \
    hotplug.h \
    libusb.h \
    libusbi.h \
    version.h \
    version_nano.h \
    os/config.h \
    os/libusb.h \
    os/libusbi.h \
    os/poll_windows.h \
    os/threads_windows.h \
    os/version.h \
    os/version_nano.h \
    os/windows_common.h \
    os/windows_usb.h

FORMS    += musb.ui
