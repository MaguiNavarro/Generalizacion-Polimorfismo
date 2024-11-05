#ifndef LIMPIEZA_H
#define LIMPIEZA_H
#include <iostream>
#include "Producto.h" 
using namespace std;

class Limpieza: public Producto 
{
private:
    bool esToxico;
    const int IVA = 1.21;

public:
    Limpieza();
    ~Limpieza();
    bool esToxico();
    void mostrarInfo()const override ;
    double calcularPrecio()const override;

};




 #endif //LIMPIEZA_H