#ifndef ALIMENTICIO_H
#define ALIMENTICIO_H
#include <iostream>
#include "Producto.h"
class Alimenticio: public Producto
{
private:
    bool esCeliaco;
    int mesVence;
    int anioVence;
    static const double IVA= 1.105;

public:
    Alimenticio(int cod, string desc, double precio, int mesVenc, int anioVenc, bool celiacos );
    ~Alimenticio();
    bool esAptoCeliacos() const ;
    void mostrarInfo()const override ;
    double calcularPrecio()const override;
     bool estaVencido() const ;
};




 #endif //ALIMENTICIO_H