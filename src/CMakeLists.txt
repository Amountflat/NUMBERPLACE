cmake_minimum_required(VERSION 3.20)
project(NUMBERPLATE CXX)

set(EXE_NAME numberplate)

set(SRC_NUMBERPLATE_IDENTIFIER)
list(APPEND SRC_NUMBERPLATE_IDENTIFIER numberplate/Identifier/Identifier.cpp)
list(APPEND SRC_NUMBERPLATE_IDENTIFIER numberplate/Identifier/operator.cpp)

set(SRC_NUMBERPLATE_MANAGERIDENTIFIER)
list(APPEND SRC_NUMBERPLATE_MANAGERIDENTIFIER numberplate/ManagerIdentifier/Erase.cpp)
list(APPEND SRC_NUMBERPLATE_MANAGERIDENTIFIER numberplate/ManagerIdentifier/GetId.cpp)
list(APPEND SRC_NUMBERPLATE_MANAGERIDENTIFIER numberplate/ManagerIdentifier/ManagerIdentifier.cpp)

set(SRC_NUMBERPLATE_NUMBER)
list(APPEND SRC_NUMBERPLATE_NUMBER numberplate/Number/GetKind.cpp)
list(APPEND SRC_NUMBERPLATE_NUMBER numberplate/Number/Number.cpp)

set(SRC_NUMBERPLATE)
list(APPEND SRC_NUMBERPLATE ${SRC_NUMBERPLATE_IDENTIFIER})
list(APPEND SRC_NUMBERPLATE ${SRC_NUMBERPLATE_MANAGERIDENTIFIER})
list(APPEND SRC_NUMBERPLATE ${SRC_NUMBERPLATE_NUMBER})

set(SRC)
list(APPEND SRC ${SRC_NUMBERPLATE})
list(APPEND SRC main.cpp)

add_executable(${EXE_NAME} ${SRC})
target_include_directories(${EXE_NAME} PUBLIC ../include)