#include "Articulo.h"

Articulo::Articulo() : idArticulo(0), nombre(""), estado("Disponible"), descripcion(""), disponible(true) {}

Articulo::Articulo(int _id, string _nombre, string _estado, string _desc, bool _disponible) {
    this->setIdArticulo(_id);
    this->setNombre(_nombre);
    this->setEstado(_estado);
    this->setDescripcion(_desc);
    this->setDisponible(_disponible);
}

Articulo::~Articulo() {}

void Articulo::setIdArticulo(int _id) { this->idArticulo = _id; }
int Articulo::getIdArticulo() const { return this->idArticulo; }
void Articulo::setNombre(string _nombre) { this->nombre = _nombre; }
string Articulo::getNombre() const { return this->nombre; }
void Articulo::setEstado(string _estado) { this->estado = _estado; }
string Articulo::getEstado() const { return this->estado; }
void Articulo::setDescripcion(string _desc) { this->descripcion = _desc; }
string Articulo::getDescripcion() const { return this->descripcion; }
void Articulo::setDisponible(bool _disponible) { this->disponible = _disponible; }
bool Articulo::getDisponible() const { return this->disponible; }

bool Articulo::verificarDisp() { return this->disponible; }

void Articulo::cambiarEstado(string _estado) {
    this->estado = _estado;
    cout << "\n\t[✓] Estado cambiado a: " << _estado << endl;
}

string Articulo::obtenerInfo() {
    return "ID: " + to_string(this->idArticulo) + " | Nombre: " + this->nombre + " | Estado: " + this->estado;
}

void Articulo::imprimir() const {
    cout << "\n\t--- Articulo ---" << endl;
    cout << "\tID: " << this->idArticulo << "\n\tNombre: " << this->nombre 
         << "\n\tEstado: " << this->estado << "\n\tDisponible: " << (this->disponible ? "SI" : "NO") << endl;
}
