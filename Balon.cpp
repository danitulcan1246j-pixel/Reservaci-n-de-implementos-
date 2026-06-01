#include "Balon.h"

Balon::Balon(int id, string n, string dep, string m) : Articulo() {
    this->setIdArticulo(id);
    this->setNombre(n);
    this->deporte = dep;
    this->marca = m;
}

string Balon::obtenerInfo() {
    return "Balon: " + this->getNombre() + " | Deporte: " + deporte;
}
