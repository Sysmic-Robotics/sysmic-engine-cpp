project(sysmic)

#añadir resto de directorios a medida que se vayan creando
add_subdirectory(vision)

qt_add_executable(sysmic
    main.cpp
)

target_link_libraries(sysmic PRIVATE
    vision
    Qt6::Network
)
