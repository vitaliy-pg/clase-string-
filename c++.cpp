#include <iostream>
#include <string>

int main() {

    std::string cadena1 = "Hola, ";
    std::string cadena2 = "Ruben.
    std::string cadena3 = "! ¿Cómo estás?";
    std::string cadena4 = " Espero que todo vaya bien.";
    std::string cadena5 = " ¡Hasta luego!";


    std::string resultado = cadena1 + cadena2;
    std::cout << "Cadena resultante: " << resultado << std::endl;

    return 0;
}