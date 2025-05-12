cmake_minimum_required(VERSION 3.16)

project(Personal_Organizer VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql Charts)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql Charts)

set(PROJECT_SOURCES
        main.cpp
        loginpage.cpp
        loginpage.h
        loginpage.ui
        login.cpp
        login.h
        login.ui
        signup.cpp
        signup.h
        signup.ui
        databaseheader.h
        dashboard.cpp
        dashboard.h
        dashboard.ui
        addexpenses.cpp
        addexpenses.h
        addexpenses.ui
        addimportantdates.cpp
        addimportantdates.h
        addimportantdates.ui
        addincome.cpp
        addincome.h
        addincome.ui
        addlectureshedule.cpp
        addlectureshedule.h
        addlectureshedule.ui
        expensesstatus.cpp
        expensesstatus.h
        expensesstatus.ui
        monthlyreports.cpp
        monthlyreports.h
        monthlyreports.ui
        setbudgets.cpp
        setbudgets.h
        setbudgets.ui
        displaylectureshedule.cpp
        displaylectureshedule.h
        displaylectureshedule.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Personal_Organizer
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        login.h login.cpp login.ui
        signup.h signup.cpp signup.ui
        databaseheader.h
        dashboard.h dashboard.cpp dashboard.ui
        addincome.h addincome.cpp addincome.ui
        addexpenses.h addexpenses.cpp addexpenses.ui
        setbudgets.h setbudgets.cpp setbudgets.ui
        monthlyreports.h monthlyreports.cpp monthlyreports.ui
        expensesstatus.h expensesstatus.cpp expensesstatus.ui
        addlectureshedule.h addlectureshedule.cpp addlectureshedule.ui
        addimportantdates.h addimportantdates.cpp addimportantdates.ui
        displaylectureshedule.h displaylectureshedule.cpp displaylectureshedule.ui
        src.qrc
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Personal_Organizer APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Personal_Organizer SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Personal_Organizer
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Personal_Organizer PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Sql Qt${QT_VERSION_MAJOR}::Charts)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Personal_Organizer)
endif()
set_target_properties(Personal_Organizer PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Personal_Organizer
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Personal_Organizer)
endif()
