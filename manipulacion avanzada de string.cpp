#include <iostream>
#include <string>


int main() {

    std::string miCadena = "Este es un ejemplo de C++ con strings.";

    std::cout << "Cadena original: " << miCadena << std::endl;

    size_t indiceInicio = 11;
    size_t longitudSubcadena = 7;
    std::string subcadena = miCadena.substr(indiceInicio, longitudSubcadena);

    std::cout << "Subcadena obtenida: " << subcadena << std::endl;

    size_t indiceInsercion = 24;
    std::string cadenaAInsertar = "manipulación ";
    miCadena.insert(indiceInsercion, cadenaAInsertar);

    std::cout << "Cadena después de la inserción: " << miCadena << std::endl;

    size_t indiceEliminacion = 11;
    size_t longitudEliminacion = 7;
    miCadena.erase(indiceEliminacion, longitudEliminacion);


    std::cout << "Cadena después de la eliminación: " << miCadena << std::endl;

    return 0;
}