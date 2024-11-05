#include <iostream>
#include <vector>
#include "Libreria.h"
using namespace std;
Libreria :: Libreria(string nombre){
    Nombre = nombre;
}
 void Libreria :: crearVenta(string codigoVenta, Fecha fecha,   vector<ObraLiteraria*> obras) {
       Venta* nuevaVenta= new Venta(codigoVenta, fecha, obras);
       Ventas.push_back(nuevaVenta);
    }

       
    void Libreria :: listarVentasPorFecha(const Fecha &fecha) const {

        for (size_t i = 0; i < Ventas.size(); i++) {

            if ( Ventas[i]->getFecha()  == fecha) {
                
                Ventas[i]->listarInformacion();
            }
        }
    }

    double Libreria :: calcularRecaudacionMensual(int mes) const {
        double total = 0.0;
        for (size_t i= 0; i< Ventas.size(); i++) {
           if ( Ventas[i]->getFecha().getMes() == mes) {
               total += Ventas[i]->calcularMontoTotal();
            }
        }
        return total;
    }
    Venta* Libreria::getVenta(string codigoVenta) const {
    for (Venta* venta : Ventas) {
        if (venta->getCodigo() == codigoVenta) {
            return venta; // Devuelve la venta si se encuentra el código
        }
    }
    return nullptr; // Devuelve nullptr si no se encuentra la venta
}
    Libreria::~Libreria(){
    for (size_t i = 0; i < Ventas.size(); ++i) {
        delete Ventas[i]; // Liberar la memoria de cada publicacion creada
    }
}
