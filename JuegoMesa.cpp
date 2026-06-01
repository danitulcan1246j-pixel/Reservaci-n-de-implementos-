#include "JuegoMesa.h"
#include <iostream>

int JuegoMesa::contarPiezas() { return cantPiezas; }
bool JuegoMesa::validarPiezas() { return completo; }
void JuegoMesa::reportarFaltante() { std::cout << "Reportando faltante..." << std::endl; }
void JuegoMesa::ingresar() { std::cout << "Juego ingresado." << std::endl; }
std::string JuegoMesa::obtenerInfo() { return "Juego: " + nombre; }
