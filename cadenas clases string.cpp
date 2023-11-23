#include <iostream>
#include <string>

int main() {

    std::string miCadena = " los restaurantes japoneses no me gusatan";
    std::string subcadenaBuscada = "ejemplo";
    size_t indiceInicio = miCadena.find(subcadenaBuscada);

    if (indiceInicio != std::string::npos) {
        std::cout << "La subcadena '" << subcadenaBuscada << "' comienza en el índice: " << indiceInicio << std::endl;
    } else {
        std::cout << "La subcadena '" << subcadenaBuscada << "' no se encuentra en la cadena." << std::endl;
    }


