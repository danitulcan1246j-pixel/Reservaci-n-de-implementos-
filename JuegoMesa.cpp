#include "JuegoMesa.h"

JuegoMesa::JuegoMesa(int id, string n, int piezas, string edit) : Articulo() {
    this->setIdArticulo(id);
    this->setNombre(n);
    this->cantPiezas = piezas;
    this->editorial = edit;
}

string JuegoMesa::obtenerInfo() {
    return "Juego de Mesa: " + this->getNombre() + " | Editorial: " + editorial;
}
