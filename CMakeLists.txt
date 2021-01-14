cmake_minimum_required(VERSION 3.15)
project(Laboratorio)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(test)

add_executable(Laboratorio main.cpp Chat.cpp Chat.h User.cpp User.h Subject.h Observer.h Notifier.cpp Notifier.h Register.cpp Register.h Message.cpp Message.h)

# add_library(Laboratorio_test main.cpp Chat.cpp Chat.h User.cpp User.h Subject.h Observer.h Notifier.cpp Notifier.h Register.cpp Register.h Message.cpp Message.h)

# target_link_libraries(Laboratorio_test)