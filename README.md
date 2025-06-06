## Laboratorio 5 - Breyson Barrioss Salazar - C31049

## Instalación de la biblioteca cJSON

Para poder compilar el proyecto es imprescindible contar con la biblioteca cJSON instalada en el sistema. Esta biblioteca facilita la creación y 
manipulación de archivos JSON en lenguaje C. En sistemas basados en Debian o Ubuntu, la instalación se realiza ejecutando el comando sudo apt install 
libcjson-dev. Esta instalación es necesaria porque sin ella la compilación fallará al no encontrar las funciones propias de cJSON, como cJSON_CreateObject
o cJSON_AddStringToObject. Por lo tanto, este paso debe realizarse antes de intentar compilar el proyecto.

## Compilación con Makefile

El proyecto puede compilarse utilizando un Makefile. Desde el directorio raíz del proyecto, basta con ejecutar el comando make. Este comando compila 
los archivos fuente que han cambiado y genera el ejecutable con el nombre LABO5. El Makefile está configurado para detectar cambios y recompilar solo 
lo necesario, por lo que resulta eficiente para un desarrollo iterativo. Luego de la compilación, se ejecuta el programa con ./LABO5. No se requieren 
configuraciones previas ni directorios adicionales, por lo que este método es el más rápido y sencillo para usuarios que solo desean compilar y ejecutar
sin complicaciones.

## Compilación con CMake

CMake ofrece una estructura más organizada para proyectos que pueden crecer en complejidad. Para compilar con CMake, primero se crea un directorio 
separado para la compilación, normalmente llamado cmake-build, y se navega a él. Luego se ejecuta cmake .. para configurar el proyecto, lo cual debe 
hacerse únicamente la primera vez o cuando se realizan cambios en la configuración del proyecto, como en el archivo CMakeLists.txt. Posteriormente, se 
ejecuta el comando make dentro de ese directorio para compilar el proyecto. Este proceso genera un ejecutable llamado LABO5 dentro del directorio
cmake-build. Para ejecutar el programa, se utiliza ./LABO5 desde ese mismo directorio. Si solo se modifican archivos fuente, no es necesario repetir la 
configuración con CMake; basta con ejecutar make para recompilar solo lo que cambió

## Compilación con Meson

Meson es una alternativa moderna que facilita la configuración y la gestión de dependencias. Para compilar con Meson, se ejecuta primero el comando meson
setup meson-build desde el directorio raíz del proyecto. Esta configuración debe realizarse solo una vez o cuando se borre el directorio meson-build o se
modifiquen las opciones de compilación. Después, la compilación se realiza con meson compile -C meson-build, que compila únicamente los archivos
necesarios y genera el ejecutable LABO5 dentro del directorio meson-build. Para ejecutar el programa, se utiliza la ruta ./meson-build/LABO5. Meson 
detecta automáticamente la biblioteca cJSON instalada y la enlaza sin necesidad de configuraciones adicionales, haciendo el proceso sencillo y confiable.


