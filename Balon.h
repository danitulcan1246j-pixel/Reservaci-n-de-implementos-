#ifndef Balon.h
#define Balon.h

#include "Articulo.h"
#include <string>

class Balon : public Articulo {
private:
    std::string deporte;
    std::string marca;
    float presionAire;
    std::string material;
    int talla;

public:
    
    Balon(int id, std::string n, std::string dep, std::string m) 
        : deporte(dep), marca(m), presionAire(0.0f), talla(0) {
        idArticulo = id;
        nombre = n;
        disponible = true;
    }

    void inflar(float psi);
    void asignarDeporte(std::string dep);
    bool chequearDesgaste();

    bool verificarDisp() override { return disponible; }
    void cambiarEstado(std::string nuevoEstado) override { estado = nuevoEstado; }
    std::string obtenerInfo() override;
};

#endif
