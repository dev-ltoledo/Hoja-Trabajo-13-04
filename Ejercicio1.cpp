#include <iostream>

using namespace std;

// Función para calcular el factorial de un número de manera recursiva
long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un número entero no negativo: ";
    cin >> numero;

    if (numero < 0) {
        // Mostrar mensaje de error si el número es negativo
        cout << "Error: El número debe ser no negativo." << endl;
    } else {
        // Calcular y mostrar el factorial si el número es no negativo
        unsigned long long resultado = factorial(numero);
        cout << "El factorial de " << numero << " es: " << resultado << endl;
    }

    return 0;
}
