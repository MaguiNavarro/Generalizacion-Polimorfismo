#include <iostream>

#include "ObraLiteraria.h"
#include "Venta.h"
#include "Fecha.h"
using namespace std;

Venta :: Venta (string codigo, Fecha fec,   vector<ObraLiteraria*> obras ){
    codigoVenta = codigo;
    fecha = fec;
    this->articulosVendidos= obras;
}

void Venta ::listarInformacion() const{
     std::cout << "Venta: " << codigoVenta << ", Fecha: " << fecha << std::endl;
}

Fecha Venta :: getFecha() const{
   return this->fecha;
}

 void Venta:: agregarArticulo(ObraLiteraria* publicacion) {
     articulosVendidos.push_back(publicacion); 
 }
 string Venta:: getCodigo()const{
    return codigoVenta;
 }

 double Venta :: calcularMontoTotal() const{
       double monto=0;
       for (ObraLiteraria* articulo : articulosVendidos)
       {
            monto += articulo->getPrecio();
       }
     return monto;      

 }