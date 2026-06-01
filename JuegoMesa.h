#ifndef JuegoMesa.h
#define JuegoMesa.h

#include "Articulo.h"
#include <string>

class JuegoMesa : public Articulo {
private:
    int cantPiezas;
    std::string editorial;
    int edadMin;
    std::string tiempoJuego;
    bool completo;

public:
    // 
    JuegoMesa(int id, std::string n, int piezas, std::string edit) 
        : cantPiezas(piezas), editorial(edit), completo(true) {
        idArticulo = id;
        nombre = n;
        disponible = true;
    }

    int contarPiezas();
    bool validarPiezas();
    void reportarFaltante();
    void ingresar();

    bool verificarDisp() override { return disponible; }
    void cambiarEstado(std::string nuevoEstado) override { estado = nuevoEstado; }
    std::string obtenerInfo() override;
    
    void imprimir(std::string query);
};

#endif
