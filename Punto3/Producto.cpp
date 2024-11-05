#include <iostream>
#include <vector>
#include "Producto.h"
using namespace std;

Producto:: Producto(int cod, string desc, double precio){
     this->codigo= cod;
     this->Descripcion= desc;
     this->precioBase= precio;
}

int Producto :: getCodigo ()const {
     return this->codigo;
}

void Producto:: mostrarInfo() const{
     cout << "Codigo " << codigo << endl;
        cout << "Precio Base: " << precioBase << endl;
        cout << "Descripcion: " << Descripcion << endl;
  
}
     int Producto:: getPrecioBase()const {
         return this->precioBase;
    }

