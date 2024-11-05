#ifndef ALMACEN_H
#define ALMACEN_H
#include <iostream>
#include <vector>
#include "Venta.h"

class Almacen
{
private:
      vector<Venta*> ventas;
public:
     void crearRegistrarVenta(int cod, string fecha,vector<Producto*>prod );
     double calcularVentasTotales(int Mes, int Anio) const;
     void mostrarVentas() const;
   
     ~Almacen();
};



 #endif //ALMACEN_H