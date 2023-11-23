#include <iostream>
#include <string>

int main() {

    std::string miCadena;

    std::cout << "Ingrese una cadena: ";
    std::getline(std::cin, miCadena);

    std::cout << "El tamaño de la cadena es: " << miCadena.size() << " caracteres." << std::endl;


    if (miCadena.empty()) {
        std::cout << "La cadena está vacía." << std::endl;
    } else {
        std::cout << "La cadena NO está vacía." << std::endl;
    }
    std::string segundaCadena = " Esta es otra cadena.";
    miCadena += segundaCadena;


    std::cout << "Cadena después de la concatenación: " << miCadena << std::endl;

    return 0;
}