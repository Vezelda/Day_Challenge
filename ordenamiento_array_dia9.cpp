#include <iostream>  
#include <algorithm> //para la función sort.

using namespace std;

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; //Declaramos un array y lo inicializamos.
    int n = sizeof(arr) / sizeof(arr[0]); //Calculamos  el número de elementos en el array.

    cout << "Array original: "; //Imprime un mensaje para mostrar el array original.
    for (int i = 0; i < n; i++) //Bucle for que recorre cada elemento del array.
        cout << arr[i] << " "; //Imprime cada elemento del array con espacios
    cout << endl; // para el salto de linea

    sort(arr, arr + n); // Llamamos a la función sort para ordenar el array desde el inicio hasta el final.

    cout << "Array ordenado: "; //Imprime un mensaje para mostrar el array ordenado.
    for (int i = 0; i < n; i++) //Bucle for que recorre cada elemento del array ordenado.
        cout << arr[i] << " "; // Imprime cada elemento ordenado del array seguido de un espacio.
    cout << endl; // Imprime un salto de línea.

    return 0; // Termina la ejecución del programa con código de salida 0.
}
