#ifndef LIBRO_H
#define LIBRO_H
#include <iostream>
#include "ObraLiteraria.h"
using namespace std;

class Libro : public ObraLiteraria
{
private:
     string autorPrincipal;
     string Editorial;
     bool esBestSeller;
     const double AUMENTO= 0.10;
   

public:
    Libro(string codigo, const string titulo, int anioEdicion, double precioBase,string autorPrincipal, string editorial, bool esBestSeller);
    void mostrarInfo()const override;
 
      double calcularPrecioVenta() const override;
 
};




#endif //LIBRO_H