HEADERS = textedit.h \
    dialogeditor.h \
    highlighter.h \
    wgetrchelp.h
SOURCES = main.cpp \
    textedit.cpp \
    dialogeditor.cpp \
    highlighter.cpp \
    wgetrchelp.cpp
RESOURCES = customcompleter.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/tools/customcompleter
sources.files = $$SOURCES \
    $$HEADERS \
    $$RESOURCES \
    $$FORMS \
    customcompleter.pro \
    resources
sources.path = $$[QT_INSTALL_EXAMPLES]/tools/customcompleter
INSTALLS += target \
    sources
symbian:include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)
OTHER_FILES += resources/wordlist.txt \
    resources/wordlist \
    resources/keyword
FORMS += wgetrchelp.ui
