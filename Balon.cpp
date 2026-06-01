#include "Balon.h"
#include <iostream>

void Balon::inflar(float psi) { presionAire = psi; }
void Balon::asignarDeporte(std::string dep) { deporte = dep; }
bool Balon::chequearDesgaste() { return false; }
