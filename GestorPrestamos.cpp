#include "GestorPrestamos.h"
#include <iostream>

void GestorPrestamos::crearPrestamo() {
    if (estudiantes.empty() || inventario.empty()) {
        std::cout << "Error: Se necesitan estudiantes y articulos registrados." << std::endl;
        return;
    }

    std::cout << "\n--- Seleccione Estudiante ---" << std::endl;
    for (size_t i = 0; i < estudiantes.size(); ++i) {
        std::cout << i << ". " << estudiantes[i].nombre << " (ID: " << estudiantes[i].idEstudiante << ")" << std::endl;
    }

    int idxEst;
    std::cout << "Indice de estudiante: ";
    std::cin >> idxEst;

    std::cout << "\n--- Seleccione Articulo ---" << std::endl;
    for (size_t i = 0; i < inventario.size(); ++i) {
        std::cout << i << ". " << inventario[i]->obtenerInfo() << std::endl;
    }

    int idxArt;
    std::cout << "Indice de articulo: ";
    std::cin >> idxArt;

    if (idxEst >= 0 && idxEst < estudiantes.size() && idxArt >= 0 && idxArt < inventario.size()) {
        Prestamo nuevoPrestamo;
        nuevoPrestamo.idPrestamo = prestamos.size() + 1; 
        nuevoPrestamo.estudiante = &estudiantes[idxEst];
        nuevoPrestamo.articulo = inventario[idxArt];
        nuevoPrestamo.estado = "Activo";
        
        prestamos.push_back(nuevoPrestamo);
        
        std::cout << "\n================================" << std::endl;
        std::cout << "RESUMEN DE PRESTAMO GENERADO" << std::endl;
        std::cout << "PRESTAMISTA: " << nuevoPrestamo.estudiante->nombre << std::endl;
        std::cout << "ARTICULO: " << nuevoPrestamo.articulo->getNombre() << std::endl;
        std::cout << "ESTADO: " << nuevoPrestamo.estado << std::endl;
        std::cout << "================================" << std::endl;
    } else {
        std::cout << "Error: Indice invalido." << std::endl;
    }
}
