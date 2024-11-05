#ifndef LIMPIEZA_H
#define LIMPIEZA_H
#include <iostream>
#include "Producto.h" 
using namespace std;

class Limpieza: public Producto 
{
private:
    bool esToxico;
    static const int IVA = 1.21;

public:
    Limpieza(int cod,string desc, double precio, bool toxico);
    ~Limpieza();
    bool getEsToxico()const ;
    void mostrarInfo()const override ;
    double calcularPrecio() const override;

};




 #endif //LIMPIEZA_H