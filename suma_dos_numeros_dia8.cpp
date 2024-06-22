#include <iostream>

int main() {
    //Declaración de variables para la suma
    double num1, num2, suma;
    
    // Pedimos al usuario el primer numero, o sea num1
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    
    // Pedimos al usuario el segundo numero, o sea num2
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;
    
    // Sumamos los dos numeros
    suma = num1 + num2;
    
    // print del resultado
    std::cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << std::endl;
    
    return 0;
}
