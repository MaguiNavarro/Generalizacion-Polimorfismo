#include <iostream>
#include "Libro.h"
using namespace std;

Libro :: Libro (string codigo,string titulo, int anioEdicion, double precioBase,
          string autorPrincipal, string editorial, bool esBestSeller) 
          : ObraLiteraria(codigo, titulo, anioEdicion, precioBase), autorPrincipal(autorPrincipal),
          Editorial(editorial), esBestSeller(esBestSeller) {}

       

 double  Libro :: calcularPrecioVenta() const {
        double precioFinal = precioBase;
        if (esBestSeller) {
            precioFinal += precioFinal* AUMENTO;  
        }
        return precioFinal * (1+IVA);  
    }
   
    void Libro:: mostrarInfo() const{
        ObraLiteraria::mostrarInfo();
        cout << "Titulo " << Titulo << endl;
        cout << "Anio edicion: " << anioEdicion << endl;
        cout << "ISBN: " << Codigo << endl;
        cout << "Editorial: " << Editorial << endl;
        cout << "Autor: " << autorPrincipal << endl;
        cout << "BestSeller: " << (esBestSeller ? "Si" : "No" )<< endl;
        cout << "Precio final: " << calcularPrecioVenta() << endl;
    }