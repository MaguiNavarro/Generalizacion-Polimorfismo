#ifndef VENTA_H
#define VENTA_H
#include <iostream>
#include <vector>
#include "Fecha.h"
#include "ObraLiteraria.h"
using namespace std;

class Venta
{
private:
   string codigoVenta;
    Fecha fecha;
    vector<ObraLiteraria*> articulosVendidos;

public:
    Venta(string codigo, Fecha fecha,  vector<ObraLiteraria*> obras);
 
    void agregarArticulo(ObraLiteraria* publicacion) ;
    void listarInformacion() const;
    double calcularMontoTotal() const;
    Fecha getFecha() const;
    string getCodigo()const;
 };






 #endif //VENTA_H