#include <iostream>
#include "Limpieza.h" 
using namespace std;

Limpieza:: Limpieza(int codig, string desc, double precio,bool toxico)
: Producto(codig,desc,precio), esToxico(toxico){}

  bool Limpieza::getEsToxico() const { return esToxico; }

      void Limpieza:: mostrarInfo() const  {
        Producto::mostrarInfo();
        cout << "Es toxico: " << (esToxico ? "Si" : "No") << endl;
        cout << "Precio con IVA: $" << calcularPrecio() << endl;
    }
  double Limpieza:: calcularPrecio() const  {
        return precioBase * IVA;
    }  
