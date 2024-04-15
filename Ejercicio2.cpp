#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Estructura para representar un libro
struct Libro {
    string titulo;
    string autor;
};

// Función para añadir un libro a la biblioteca
void agregarLibro(vector<Libro> &biblioteca) {
    Libro nuevoLibro;
    cout << "Ingrese el título del libro: ";
    cin.ignore();
    getline(cin, nuevoLibro.titulo);
    cout << "Ingrese el autor del libro: ";
    getline(cin, nuevoLibro.autor);
    biblioteca.push_back(nuevoLibro);
    cout << "Libro agregado correctamente." << endl;
}

// Función para mostrar todos los libros en la biblioteca
void mostrarLibros(const vector<Libro> &biblioteca) {
    if (biblioteca.empty()) {
        cout << "La biblioteca está vacía." << endl;
    } else {
        cout << "Libros en la biblioteca:" << endl;
        for (const auto &libro : biblioteca) {
            cout << "Título: " << libro.titulo << ", Autor: " << libro.autor << endl;
        }
    }
}

// Función para buscar un libro por su título
void buscarLibro(const vector<Libro> &biblioteca) {
    string tituloBuscado;
    cout << "Ingrese el título del libro a buscar: ";
    cin.ignore();
    getline(cin, tituloBuscado);
    bool encontrado = false;
    for (const auto &libro : biblioteca) {
        if (libro.titulo == tituloBuscado) {
            cout << "Libro encontrado:" << endl;
            cout << "Título: " << libro.titulo << ", Autor: " << libro.autor << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "El libro no se encuentra en la biblioteca." << endl;
    }
}

int main() {
    vector<Libro> biblioteca;
    int opcion;

    do {
        cout << "\nMenú:" << endl;
        cout << "1. Agregar libro" << endl;
        cout << "2. Mostrar todos los libros" << endl;
        cout << "3. Buscar libro por título" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarLibro(biblioteca);
                break;
            case 2:
                mostrarLibros(biblioteca);
                break;
            case 3:
                buscarLibro(biblioteca);
                break;
            case 4:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Inténtelo de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}
