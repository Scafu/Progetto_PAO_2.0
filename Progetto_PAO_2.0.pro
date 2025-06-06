######################################################################
# Automatically generated by qmake (3.1) Fri Mar 28 00:18:31 2025
######################################################################

TEMPLATE = app
TARGET = Progetto_PAO_2.0
INCLUDEPATH += ./includes
CONFIG += console
CONFIG += release
DESTDIR = release
OBJECTS_DIR = $$DESTDIR
MOC_DIR = $$DESTDIR
RCC_DIR = $$DESTDIR

QT += core gui widgets

# You can make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# Please consult the documentation of the deprecated API in order to know
# how to port your code away from it.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_UP_TO=0x060000 # disables all APIs deprecated in Qt 6.0.0 and earlier

# Input
HEADERS += includes/AbstractConstVisitor.h \
           includes/AbstractItem.h \
           includes/AbstractVisitor.h \
           includes/Book.h \
           includes/BookCreationForm.h \
           includes/Collezione.h \
           includes/CustomToolBar.h \
           includes/FormConstVisitor.h \
           includes/FormVisitor.h \
           includes/Game.h \
           includes/GameCreationForm.h \
           includes/ItemCreationForm.h \
           includes/ItemPageUI.h \
           includes/ItemWidgetUI.h \
           includes/ItemPageEditUI.h \
           includes/MainWindow.h \
           includes/Music.h \
           includes/MusicCreationForm.h \
           includes/VisitorCreateForm.h \
           includes/VisitorReadForm.h \
           includes/VisitorReadItem.h 

SOURCES += source/AbstractItem.cpp \
           source/Book.cpp \
           source/BookCreationForm.cpp \
           source/Collezione.cpp \
           source/CustomToolBar.cpp \
           source/Game.cpp \
           source/GameCreationForm.cpp \
           source/ItemCreationForm.cpp \
           source/ItemPageUI.cpp \
           source/ItemWidgetUI.cpp \
           source/ItemPageEditUI.cpp \
           source/main.cpp \
           source/MainWindow.cpp \
           source/Music.cpp \
           source/MusicCreationForm.cpp \
           source/VisitorCreateForm.cpp \
           source/VisitorReadForm.cpp \
           source/VisitorReadItem.cpp 
RESOURCES += resources.qrc
