QT += widgets
requires(qtConfig(listview))

SOURCES   = adddialog.cpp \
            finddialog.cpp \
            addresswidget.cpp \
            main.cpp \
            mainwindow.cpp \
            newaddresstab.cpp \
            bookmarktab.cpp \
            tablemodel.cpp
HEADERS   = adddialog.h \
            finddialog.h \
            addresswidget.h \
            mainwindow.h \
            newaddresstab.h \
            bookmarktab.h \
            tablemodel.h

# install
target.path = /Users/seodonghwan/SEA-ME-Warmup/Module03/success_half/testqt


INSTALLS += target

FORMS += \
    mainwindow.ui
