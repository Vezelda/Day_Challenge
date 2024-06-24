#include <iostream>
#include <string>
#include <algorithm> // para std::remove_if
#include <cctype>    // para std::tolower

bool esPalindromo(const std::string& texto) {
    std::string limpio;
    
    // Copiar solo caracteres alfanuméricos y convertirlos a minúsculas
    std::copy_if(texto.begin(), texto.end(), std::back_inserter(limpio),
        [](char c){ return std::isalnum(c); });
    std::transform(limpio.begin(), limpio.end(), limpio.begin(),
        [](char c){ return std::tolower(c); });

    // Comparar la cadena con su versión invertida
    std::string reverso = limpio;
    std::reverse(reverso.begin(), reverso.end());
    return limpio == reverso;
}

int main() {
    std::string cadena;

    std::cout << "Ingrese una cadena de texto: ";
    std::getline(std::cin, cadena);

    if (esPalindromo(cadena)) {
        std::cout << "La cadena es un palíndromo." << std::endl;
    } else {
        std::cout << "La cadena no es un palíndromo." << std::endl;
    }

    return 0;
}
