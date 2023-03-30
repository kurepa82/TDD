# TDD
Un repositorio de GitHub que se vaya a utilizar para aplicar TDD debe contener lo siguiente:

- **Código fuente**: el repositorio debe contener el código fuente de la aplicación o componente que se va a probar. Este código debe estar organizado y estructurado de forma clara y coherente para facilitar su mantenimiento y comprensión.

- **Directorio de pruebas**: el repositorio debe incluir un directorio o carpeta dedicado a las pruebas. Este directorio debe contener todas las pruebas unitarias y de integración que se han escrito para el código fuente. Cada prueba debe estar contenida en un archivo separado para facilitar su mantenimiento.

- **Biblioteca de pruebas**: el repositorio debe incluir la biblioteca de pruebas que se va a utilizar. Esto puede ser una biblioteca de pruebas estándar como Doctest o Google Test, o una biblioteca de pruebas personalizada.

- **Documentación**: el repositorio debe contener documentación clara y detallada sobre cómo se ejecutan las pruebas, cómo se escriben las pruebas y cómo se contribuye al proyecto. Esto incluye un archivo README.md que describa el propósito del repositorio, cómo instalar y ejecutar las pruebas y cómo contribuir al proyecto.

- **Configuración de CI/CD**: el repositorio debe tener configurada una plataforma de integración y entrega continuas (CI/CD) para automatizar la ejecución de pruebas y garantizar que el código se construye correctamente. Esto puede ser un archivo de configuración de Travis CI, GitHub Actions o cualquier otra plataforma de CI/CD compatible.
-------------------------------------------------------------------------------------------------------
# DESCRIPCIÓN DEL TEST

Supongamos que queremos implementar una función suma que recibe dos enteros y devuelve su suma. En primer lugar, vamos a escribir una prueba unitaria para esta función:

**c++**
```
// Test para la función suma
TEST_CASE("suma", "[operaciones]") {
    REQUIRE(suma(2, 3) == 5);
    REQUIRE(suma(-2, 3) == 1);
    REQUIRE(suma(0, 0) == 0);
    REQUIRE(suma(100, -100) == 0);
} 
```

Los archivos que se van a utilizar son:

- operaciones.hpp: Este archivo contendría la declaración de la función suma. 
- operaciones.cpp: Este archivo contendría la implementación de la función suma. 
- test_operaciones.cpp: Este archivo contendría la definición de la prueba unitaria para la función suma.
- CMakeLists.txt: para compilar

En este ejemplo, estamos utilizando una macro **TEST_CASE** para definir una nueva prueba unitaria llamada suma. La sección [operaciones] es una etiqueta opcional que se utiliza para agrupar pruebas relacionadas. Dentro de esta prueba, estamos usando la macro REQUIRE para comprobar que la función suma devuelve el resultado esperado para diferentes entradas.

Ahora vamos a implementar la función suma para que pase la prueba:

**c++**

```
// Implementación de la función suma
int suma(int a, int b) {
    return a + b;
}
```

En este caso, hemos implementado la función suma simplemente sumando los dos argumentos y devolviendo el resultado.

Por último, para compilar y ejecutar tu programa de C++ usando CMake, debes seguir los siguientes pasos:

1- Abre una terminal o línea de comandos y ubica la carpeta raíz de tu proyecto.

2- Crea una carpeta para almacenar los archivos de compilación ejecutando el comando:
```
mkdir build
cd build
```
Ejecuta CMake para generar los archivos de compilación:

```
cmake ..
```

Esto generará los archivos de compilación necesarios en la carpeta build.

Compila tu programa ejecutando el comando:

```
make
```
Los tests que desee agregar se hace a continuación, teniendo en cuenta de declarar e implementar la función.
