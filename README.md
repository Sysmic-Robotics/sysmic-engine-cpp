# SysmicEngine

## Estructura

El proyecto ha sido modularizado en componentes necesarios para facilitar el desarrollo y la mantención.
```
.
├── build
├── CMakeLists.txt
├── libs
│   ├── behavior
│   ├── communication
│   ├── navigation   
│   ├── planning  
│   ├── referee    
│   ├── trainer     
│   └── vision
├── LICENSE
└── README.md
```
La carpeta libs contiene todos los componentes, donde cada componente sigue la siguiente subestructura de carpetas. La carpeta *external* puede variar de acuerdo al componente.
```
.
├── CMakeLists.txt
├── docs
├── external
├── include
├── src
└── tools
```

## Build
Permite buildear y compilar el proyecto
```
mkdir build
cd build
cmake ..
make
```