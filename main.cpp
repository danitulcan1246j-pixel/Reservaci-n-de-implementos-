#include <iostream>
#include <vector>
#include <string>
#include "EstudianteUPS.h"

using namespace std;

void mostrarMenu() {
    cout << "\n*** GESTION DE PRESTAMOS UPS ***" << endl;
    cout << "1. Registrar Estudiante" << endl;
    cout << "2. Registrar Articulo en Inventario" << endl;
    cout << "3. Crear Nuevo Prestamo (Vincular)" << endl;
    cout << "4. Ver Historial de Prestamos" << endl;
    cout << "5. Salir" << endl;
    cout << "Opcion: ";
}

int main() {
    int opcion;
    vector<EstudianteUPB> listaEstudiantes;

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore(); // Limpiar buffer de entrada

        if (opcion == 1) {
            EstudianteUPB nuevo;
            cout << "\n=== INGRESO DE DATOS DE ESTUDIANTE ===" << endl;
            cout << "Ingrese ID del Estudiante: "; cin >> nuevo.idEstudiante;
            cout << "Ingrese Cedula: "; cin >> nuevo.cedula;
            cout << "Ingrese Email: "; cin >> nuevo.email;
            cout << "Ingrese Nombre Completo: "; cin.ignore(); getline(cin, nuevo.nombre);
            cout << "Ingrese Edad: "; cin >> nuevo.edad;
            cout << "Ingrese Ciudad: "; cin >> nuevo.ciudad;
            cout << "Ingrese Telefono: "; cin >> nuevo.telefono;
            cout << "Ingrese Foto (nombre archivo): "; cin >> nuevo.foto;

            listaEstudiantes.push_back(nuevo);
            cout << "\nEstudiante registrado exitosamente" << endl;
            cout << "Presione una tecla para continuar . . .";
            cin.ignore(); cin.get();
        }
    } while (opcion != 5);

    return 0;
}
