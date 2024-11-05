#ifndef OBRALITERARIA_H
#define OBRALITERARIA_H
#include <iostream>
using namespace std;

class ObraLiteraria
{
protected:
   static const int IVA= 0.21;
    string Codigo;
    int anioEdicion;
    string Titulo;
    double precioBase;

    
public:
    ObraLiteraria(string codigo, string titulo, int anioEdicion, double precioBase);
   virtual ~ObraLiteraria();

   virtual void mostrarInfo() const;
   virtual string getCodigo()const;
   virtual double calcularPrecioVenta() const = 0;
   virtual double getPrecio() const ;
};


 #endif //OBRALITERARIA_H


