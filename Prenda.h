#ifndef Prenda.h
#define Prenda.h
#include <string>
class Prenda {
public:
    int idPrenda;
    std::string tipo;
    std::string descripcion;
    int propietarioId;
    std::string ubicacionGaveta;
    void ingresar();
    void registrarRecibo();
};
#endif
