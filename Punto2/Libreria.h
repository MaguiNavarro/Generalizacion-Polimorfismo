#ifndef LIBRERIA_H
#define LIBRERIA_H
#include <iostream>
#include <vector>
#include "Venta.h"
using namespace std;

class Libreria
{
private:
    string Nombre;
    vector<Venta*> Ventas;

public:
    Libreria(string nombre);
    ~Libreria();
    void crearVenta(string codigo, Fecha fecha,   vector<ObraLiteraria*> obras);
    void  listarVentasPorFecha(const Fecha &fecha) const;
    double  calcularRecaudacionMensual(int mes) const;
     // Nuevo método getVenta para encontrar una venta por código
    Venta* getVenta(string codigoVenta) const;
};




#endif //LIBRERIA_H