#ifndef REVISTA_H
#define REVISTA_H
#include <iostream>
#include "ObraLiteraria.h"
using namespace std;

class Revista : public ObraLiteraria {
private: 
    int numero;
    int volumen;
    string tema;
   
public: 
     Revista(const std::string& codigo, const std::string& titulo, int anioEdicion, double precioBase,
             int numero, int volumen, const std::string& tema);
     
    void mostrarInfo() const override ;
   
    double calcularPrecioVenta() const  ;
  

 };

 #endif //REVISTA_H