cmake_minimum_required(VERSION 3.15)
project(LabProgrammazione)

set(CMAKE_CXX_STANDARD 14)

add_executable(LabProgrammazione main.cpp Chat.cpp Chat.h User.cpp User.h Subject.h Observer.h Notifier.cpp Notifier.h Register.cpp Register.h Message.cpp Message.h)