#include <iostream>
#include "Auto.h"
using namespace std;


Auto::Auto(string patente, int anioModelo, double pesoMax, double tarifa, double limiteMin )  
: Vehiculo(patente, anioModelo, pesoMax, tarifa), limiteMin(limiteMin) {}

double Auto::calcularPrecioViaje(double peso) const {
    if (peso < limiteMin) {
        return Tarifa * (1 - BONUS);
    }
    return Tarifa + calcularIncremento(peso);
}

void Auto::escribirInfo() const {
    std::cout << "Auto:  Patente: " << Patente << ", Año: " << anioModelo << ", Tarifa: " << Tarifa << "\n";
}


 