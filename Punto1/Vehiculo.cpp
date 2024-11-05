#include <iostream>
#include "Vehiculo.h"
using namespace std;

Vehiculo ::Vehiculo(string patente, int modelo, double peso, double tarifa){
    Patente=patente;
    anioModelo= modelo;
    pesoMax= peso;
    Tarifa= tarifa;
}

bool Vehiculo:: pesoExcedido( double peso)const{
     return pesoMax < peso;
}
double Vehiculo:: getTarifa()const{
    return Tarifa;
}

double Vehiculo:: calcularIncremento(double peso)const{
    double montoIncremento= 0;
    if (pesoExcedido(peso))
    {
         montoIncremento= getTarifa()* INCREMENTO;

    }
    return montoIncremento;
    
}
Vehiculo::~Vehiculo() {
}