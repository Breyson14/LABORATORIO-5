
cmake_minimum_required(VERSION 3.10)
project(LABO5 C)

set(CMAKE_C_STANDARD 99)

# Añade los archivos fuente
add_executable(LABO5 src/main.c src/json.c)

# Busca la librería cJSON instalada 
find_library(CJSON_LIB cjson)

# Enlaza la librería cJSON al ejecutable
target_link_libraries(LABO5 PRIVATE ${CJSON_LIB})
