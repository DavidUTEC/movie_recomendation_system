# Sistema de Recomendación de Películas

![Sistema de Recomendación de Películas](resources/icon.png)

## Índice
- [Introducción](#introducción)
- [Características](#características)
- [Instalación](#instalación)
- [Uso](#uso)
- [Patrones de Diseño](#patrones-de-diseño)
- [Algoritmos y Estructuras de Datos](#algoritmos-y-estructuras-de-datos)
- [Manejo de Errores](#manejo-de-errores)
- [Bibliografía](#bibliografía)
- [Contribuyentes](#contribuyentes)

## Introducción
El Sistema de Recomendación de Películas es una aplicación en C++ diseñada para ayudar a los usuarios a buscar películas por título o etiquetas, y recibir recomendaciones basadas en sus gustos. Emplea varios patrones de diseño y algoritmos para garantizar un rendimiento eficiente y una interfaz amigable.

## Características
- Búsqueda de películas por título o etiqueta.
- Posibilidad de dar "Me gusta" a las películas y ver recomendaciones basadas en las películas que te gustan.
- Agregar películas a una lista de "Ver más tarde".
- Resultados de búsqueda paginados.
- Interfaz de consola intuitiva e interactiva con soporte para colores.

## Instalación
Para instalar y ejecutar el Sistema de Recomendación de Películas, sigue estos pasos:

1. Clona el repositorio:
    ```bash
    git clone https://github.com/DavidUTEC/movie_recomendation_system
    ```

2. Navega al directorio del proyecto:
    ```bash
    cd movie-recommendation-system
    ```

3. Construye el proyecto usando CMake:
    ```bash
    mkdir build
    cd build
    cmake ..
    make
    ```

4. Ejecuta el archivo ejecutable:
    ```bash
    ./movie_recommendation_system
    ```

## Uso
Al ejecutar la aplicación, se te presentarán las siguientes opciones:

1. Buscar por título
2. Buscar por etiqueta
3. Ver películas que me gustaron
4. Ver lista de "Ver más tarde"
5. Salir

### Ejemplo de Uso
- Busca películas ingresando un título o etiqueta.
- Ve la sinopsis y elige si te gusta o si quieres verla más tarde.
- Ve recomendaciones basadas en las películas que te gustan.

## Patrones de Diseño
En este proyecto se utilizan los siguientes patrones de diseño:
1. **Singleton**: Para gestionar la instancia de la base de datos de películas.
2. **Factory Method**: Para la creación de instancias de películas.
3. **Observer**: Para manejar los cambios en las listas de "Me gusta" y "Ver más tarde".
4. **Strategy**: Para diferentes estrategias de búsqueda (por título, por etiqueta).
5. **Command**: Para encapsular las acciones del usuario como dar "Me gusta" o agregar a "Ver más tarde".

## Algoritmos y Estructuras de Datos
El proyecto hace uso de algoritmos y estructuras de datos eficientes, incluyendo:
- **Búsqueda Binaria**: Para una búsqueda rápida de películas.
- **Hash Maps**: Para acceso rápido a los datos de las películas.
- **Sets**: Para gestionar colecciones únicas de películas que te gustan y de "Ver más tarde".
- **Ordenamiento y filtrado personalizados**: Para mostrar las 10 mejores películas recomendadas.

## Manejo de Errores
La aplicación incluye un manejo robusto de errores para asegurar una experiencia de usuario fluida:
- Manejo adecuado de entradas inválidas.
- Provisión de retroalimentación para acciones (dar "Me gusta", agregar a "Ver más tarde").
- Gestión eficiente de memoria y limpieza de recursos.

## Bibliografía
1. Gamma, E., Helm, R., Johnson, R., & Vlissides, J. (1994). *Design Patterns: Elements of Reusable Object-Oriented Software*. Addison-Wesley Professional.
2. Meyers, S. (2005). *Effective C++: 55 Specific Ways to Improve Your Programs and Designs*. Addison-Wesley Professional.
3. Josuttis, N. M. (2012). *The C++ Standard Library: A Tutorial and Reference*. Addison-Wesley Professional.
4. Coplien, J. O. (1992). *Advanced C++ Programming Styles and Idioms*. Addison-Wesley Professional.

## Contribuyentes

| **David Quispe** | 
|:------------:|
| ![David Quispe](https://avatars.githubusercontent.com/u/91276766?v=4) | 
| [https://github.com/DavidUTECo](https://github.com/DavidUTECo) |