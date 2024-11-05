#include <iostream>
#include "ObraLiteraria.h"
using namespace std;

ObraLiteraria :: ObraLiteraria(string codigo, string titulo, int anioEdicion, double precio)
        : Codigo(codigo), Titulo(titulo), anioEdicion(anioEdicion), precioBase(precio) {}

ObraLiteraria:: ~ObraLiteraria(){

}
  
  void ObraLiteraria:: mostrarInfo() const{
        cout<< "Titulo" << Titulo <<endl;
        cout << "Anio"<< anioEdicion<< endl;
           cout << "Precio"<< precioBase<< endl;
  }
 string ObraLiteraria:: getCodigo()const {
         return Codigo;
   }
  
    double ObraLiteraria:: getPrecio() const {
        return this->precioBase;
    };