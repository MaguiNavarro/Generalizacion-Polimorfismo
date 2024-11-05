#include <iostream>
#include "Revista.h"
using namespace std;

 Revista::Revista(const std::string& codigo, const std::string& titulo, int anioEdicion, double precioBase,
            int numero, int volumen, const std::string& tema)
        : ObraLiteraria(codigo, titulo, anioEdicion, precioBase), numero(numero), volumen(volumen), tema(tema) {}

 void Revista :: mostrarInfo() const {
        ObraLiteraria:: mostrarInfo();
        std::cout << "Revista - ISSN: " << Codigo  <<endl
                  << ", Numero: " << numero <<", Volumen: " << volumen << ", Tema: " << tema<<endl;
               
    }

 
    
    double Revista:: calcularPrecioVenta() const  {
        double precioFinal = precioBase;
        int anioActual = 2024;  // Ejemplo del año actual
        if ((anioActual - anioEdicion) > 5) {
            precioFinal -= precioFinal *0.85;  // Descuento del 15% si tiene más de 5 años
        }
        return  precioFinal += precioFinal * (1+IVA);  
    }