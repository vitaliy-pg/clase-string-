#include <iostream>
#include <string>

int main() {
    // Crear una cadena utilizando la clase string
    std::string miCadena;

    // Leer una cadena desde la entrada estándar
    std::cout << "Ingrese una cadena: ";
    std::getline(std::cin, miCadena);

    std::cout << "El tamaño de la cadena es: " << miCadena.size() << " caracteres." << std::endl;

    // Comprobar si la cadena está vacía utilizando la función empty()
    if (miCadena.empty()) {
        std::cout << "La cadena está vacía." << std::endl;
    } else {
        std::cout << "La cadena NO está vacía." << std::endl;
    }