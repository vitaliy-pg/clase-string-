#include <iostream>
#include <string>


int main() {

    std::string miCadena = "Este es un ejemplo de C++ con strings.";
    size_t indiceInicio = 11;
    size_t longitudSubcadena = 7;
    std::string subcadena = miCadena.substr(indiceInicio, longitudSubcadena);

    std::cout << "Subcadena obtenida: " << subcadena << std::endl;

    size_t indiceInsercion = 24;
    std::string cadenaAInsertar = "manipulación ";
    miCadena.insert(indiceInsercion, cadenaAInsertar);
