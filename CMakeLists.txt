cmake_minimum_required(VERSION 3.10)

# Указывать имя проекта
project(CStruct)

# Указываем путь к заголовочным файлам
include_directories(include)

# Указать путь к библиотекам
set(CStruct_DIR ../build)

# Создаем библиотеку (статическую или динамическую)
add_library(cstruct SHARED src/cstruct.c)
# Если вы хотите создать статическую библиотеку, замените SHARED на STATIC

# Установка библиотеки
install(TARGETS cstruct DESTINATION lib)
install(FILES include/cstruct.h DESTINATION include)
