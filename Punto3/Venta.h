#ifndef VENTA_H
#define VENTA_H
#include <iostream>
#include <vector>
#include "Producto.h"

class Venta
{
private:
    int codigoVenta;
    string fecha;
    vector<Producto*> productos;
public:
     Venta(int cod, string fechaVenta, vector<Producto*> prod);
     ~Venta();
     void agregarProducto(Producto* producto);
     double calcularMontoTotal() const ;
     void mostrarInfo() const;
     string getFecha() const ;
     
};




 #endif //VENTA_H