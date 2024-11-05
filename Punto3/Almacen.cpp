#include <iostream>
#include "Almacen.h"
#include <vector>
using namespace std;

 void Almacen:: crearRegistrarVenta(int codigoVenta, string fecha,vector<Producto*>prod ) {
        Venta* venta= new Venta(codigoVenta,fecha,prod);
        ventas.push_back(venta);
    }

   double Almacen:: calcularVentasTotales(int Mes, int Anio) const {
        double total = 0;
        for (const auto& venta : ventas) {
            int ventaMes = stoi(venta->getFecha().substr(3, 2));
            int ventaAnio = stoi(venta->getFecha().substr(6, 4));
            if (ventaMes == Mes && ventaAnio == Anio) {
                total += venta->calcularMontoTotal();
            }
        }
        return total;
    }   

      void Almacen:: mostrarVentas() const {
        for (const auto& venta : ventas) {
            venta->mostrarInfo();
            cout << "=========================" << endl;
        }
    }
      Almacen:: ~Almacen() {
        for (const auto& venta : ventas) {
              delete venta;
        }
    }

