cmake_minimum_required(VERSION 3.20)
project(NUMBERPLATE CXX)

set(EXE_NAME numberplate)

set(SRC_NUMBERPLATE_NUMBER)
list(APPEND SRC_NUMBERPLATE_NUMBER numberplate/Number/GetKind.cpp)
list(APPEND SRC_NUMBERPLATE_NUMBER numberplate/Number/Number.cpp)

set(SRC_NUMBERPLATE)
list(APPEND SRC_NUMBERPLATE ${SRC_NUMBERPLATE_NUMBER})

set(SRC)
list(APPEND SRC ${SRC_NUMBERPLATE})
list(APPEND SRC main.cpp)

add_executable(${EXE_NAME} ${SRC})
target_include_directories(${EXE_NAME} PUBLIC ../include)