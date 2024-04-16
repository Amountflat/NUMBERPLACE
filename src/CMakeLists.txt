cmake_minimum_required(VERSION 3.20)
project(NUMBERPLATE CXX)

set(EXE_NAME numberplate)

set(SRC_NUMBERPLATE_IDENTIFIER)
list(APPEND SRC_NUMBERPLATE_IDENTIFIER numberplate/Identifier/Identifier.cpp)
list(APPEND SRC_NUMBERPLATE_IDENTIFIER numberplate/Identifier/operator.cpp)

set(SRC_NUMBERPLATE_BOARD)
list(APPEND SRC_NUMBERPLATE_BOARD numberplate/Board/Board.cpp)
list(APPEND SRC_NUMBERPLATE_BOARD numberplate/Board/Get.cpp)
list(APPEND SRC_NUMBERPLATE_BOARD numberplate/Board/ProductSet.cpp)
list(APPEND SRC_NUMBERPLATE_BOARD numberplate/Board/Shuffle.cpp)

set(SRC_NUMBERPLATE_MANAGERIDENTIFIER)
list(APPEND SRC_NUMBERPLATE_MANAGERIDENTIFIER numberplate/ManagerIdentifier/Erase.cpp)
list(APPEND SRC_NUMBERPLATE_MANAGERIDENTIFIER numberplate/ManagerIdentifier/GetID.cpp)
list(APPEND SRC_NUMBERPLATE_MANAGERIDENTIFIER numberplate/ManagerIdentifier/ManagerIdentifier.cpp)

set(SRC_NUMBERPLATE_NUMBER)
list(APPEND SRC_NUMBERPLATE_NUMBER numberplate/Number/GetKind.cpp)
list(APPEND SRC_NUMBERPLATE_NUMBER numberplate/Number/Number.cpp)

set(SRC_NUMBERPLATE_SQUARE)
list(APPEND SRC_NUMBERPLATE_SQUARE numberplate/Square/GetAnswer.cpp)
list(APPEND SRC_NUMBERPLATE_SQUARE numberplate/Square/GetCorrect.cpp)
list(APPEND SRC_NUMBERPLATE_SQUARE numberplate/Square/GetID.cpp)
list(APPEND SRC_NUMBERPLATE_SQUARE numberplate/Square/Square.cpp)

set(SRC_NUMBERPLATE)
list(APPEND SRC_NUMBERPLATE ${SRC_NUMBERPLATE_BOARD})
list(APPEND SRC_NUMBERPLATE ${SRC_NUMBERPLATE_IDENTIFIER})
list(APPEND SRC_NUMBERPLATE ${SRC_NUMBERPLATE_MANAGERIDENTIFIER})
list(APPEND SRC_NUMBERPLATE ${SRC_NUMBERPLATE_NUMBER})
list(APPEND SRC_NUMBERPLATE ${SRC_NUMBERPLATE_SQUARE})

set(SRC)
list(APPEND SRC ${SRC_NUMBERPLATE})
list(APPEND SRC main.cpp)

add_executable(${EXE_NAME} ${SRC})
target_include_directories(${EXE_NAME} PUBLIC ../include)