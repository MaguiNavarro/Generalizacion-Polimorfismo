#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using namespace std;

class Producto
{
private:
    int codigo;
    string Descripcion;
    double precioBase;

public:
    Producto(int cod, string desc, double precio);
    virtual ~Producto();
    virtual void mostrarInfo() const ;
    virtual int getCodigo()const ;
    virtual double calcularPrecio()const = 0;

};



 #endif //PRODUCTO_H