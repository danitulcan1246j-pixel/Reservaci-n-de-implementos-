#include <iostream>
#include <vector>
#include "GestorPrestamos.h" 

using namespace std;


void mostrarMenu() {
    cout << "\n*** GESTION DE PRESTAMOS UPS ***" << endl;
    cout << "1. Registrar Estudiante" << endl;
    cout << "2. Registrar Articulo" << endl;
    cout << "3. Crear Nuevo Prestamo" << endl;
    cout << "4. Ver Historial" << endl;
    cout << "5. Salir" << endl;
    cout << "Opcion: ";
}

int main() {
    GestorPrestamos controlador;
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore(); 

        switch (opcion) {
            case 1: {
                EstudianteUPB nuevoEstudiante;
                cout << "\n=== INGRESO DE DATOS DE ESTUDIANTE ===" << endl;
                cout << "ID: "; cin >> nuevoEstudiante.idEstudiante;
                cout << "Cedula: "; cin >> nuevoEstudiante.cedula;
                cout << "Nombre: "; cin.ignore(); getline(cin, nuevoEstudiante.nombre);
                
                controlador.registrarEstudiante(nuevoEstudiante);
                cout << "Estudiante registrado exitosamente." << endl;
                break;
            }
            case 2:
                controlador.menuRegistroArticulo();
                break;
            case 3:
                controlador.crearPrestamo();
                break;
            case 4:
                controlador.mostrarHistorial();
                break;
            case 5:
                cout << "Saliendo del sistema..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }

        if (opcion != 5) {
            cout << "\nPresione una tecla para continuar...";
            cin.get();
        }
    } while (opcion != 5);

    return 0;
}
