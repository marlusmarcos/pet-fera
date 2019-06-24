cmake_minimum_required(VERSION 3.5)

project(pet-fera VERSION 1.0
    DESCRIPTION "pet-fera is an pet shop manager"
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

############################################################

# libraris

set(SOURCES 
    src/animal.cpp 
    src/pet_driver.cpp
    src/I_layer/anfibio.cpp
    src/I_layer/ave.cpp
    src/I_layer/mamifero.cpp
    src/I_layer/reptil.cpp
    src/II_layer/anfibio_nodes/anfibio_exotico.cpp
    src/II_layer/anfibio_nodes/anfibio_nativo.cpp
    src/II_layer/ave_nodes/ave_exotica.cpp
    src/II_layer/ave_nodes/ave_nativa.cpp
    src/II_layer/mamifero_nodes/mamifero_exotico.cpp
    src/II_layer/mamifero_nodes/mamifero_nativo.cpp
    src/II_layer/reptil_nodes/reptil_exotico.cpp
    src/II_layer/reptil_nodes/reptil_nativo.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(
    ${PROJECT_NAME}
    PRIVATE ${PROJECT_SOURCE_DIR}/include)
