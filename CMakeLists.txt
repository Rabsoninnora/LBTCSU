cmake_minimum_required(VERSION 3.19)
project(VotingSystem LANGUAGES CXX)


find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)

qt_standard_project_setup()

qt_add_executable(VotingSystem
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    dashboard.h dashboard.cpp dashboard.ui
    useraddmin.h useraddmin.cpp useraddmin.ui
    mydb.h mydb.cpp
    registervoter.h registervoter.cpp registervoter.ui
    dashboard.h dashboard.cpp dashboard.ui
    registercandidate.h registercandidate.cpp registercandidate.ui
    candidates.h candidates.cpp candidates.ui
    voters.h voters.cpp voters.ui
    voterdashboard.h voterdashboard.cpp voterdashboard.ui
    castvote.h castvote.cpp castvote.ui

)

target_link_libraries(VotingSystem
    PRIVATE
        Qt::Core
        Qt::Widgets
        Qt6::Sql
)

include(GNUInstallDirs)

install(TARGETS VotingSystem
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET VotingSystem
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
