#include <iostream>
#include "Venta.h"
using namespace std;

 Venta:: Venta(int cod, string fechaVenta, vector<Producto*> prod) : codigoVenta(cod), fecha(fechaVenta) , productos(prod){}

  void Venta:: agregarProducto(Producto* producto) {
        productos.push_back(producto);
    }

    double Venta:: calcularMontoTotal() const {
        double total = 0;
        for (const auto& producto : productos) {
            total += producto->calcularPrecio();
        }
        return total;
    }

    void Venta:: mostrarInfo() const {
        cout << "Codigo de Venta: " << codigoVenta << endl;
        cout << "Fecha de Venta: " << fecha << endl;
        cout << "Productos Vendidos:" << endl;
        for (const auto& producto : productos) {
            producto->mostrarInfo();
            cout << "-----------------------" << endl;
        }
        cout << "Monto Total de Venta: $" << calcularMontoTotal() << endl;
    }
    string Venta:: getFecha() const { return fecha; }
    Venta::  ~Venta(){
        
    }
