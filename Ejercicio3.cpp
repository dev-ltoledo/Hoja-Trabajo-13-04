#include <iostream>

using namespace std;

// Función para convertir de Celsius a Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Función para convertir de Fahrenheit a Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int opcion;
    double temperatura;

    cout << "Seleccione el tipo de conversión:" << endl;
    cout << "1. Celsius a Fahrenheit" << endl;
    cout << "2. Fahrenheit a Celsius" << endl;
    cout << "Ingrese su opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese la temperatura en grados Celsius: ";
            cin >> temperatura;
            cout << "La temperatura en grados Fahrenheit es: " << celsiusToFahrenheit(temperatura) << endl;
            break;
        case 2:
            cout << "Ingrese la temperatura en grados Fahrenheit: ";
            cin >> temperatura;
            cout << "La temperatura en grados Celsius es: " << fahrenheitToCelsius(temperatura) << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
    }

    return 0;
}
