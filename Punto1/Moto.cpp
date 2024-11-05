#include <iostream>
#include "Moto.h"
using namespace std;

 Moto :: Moto(string Patente, int anioModelo, double pesoMax, double tarifa, double cilindrada): Vehiculo(Patente, anioModelo, pesoMax, Tarifa), cilindrada(cilindrada) {}

    double Moto:: calcularPrecioViaje(double peso) const  {
        return Tarifa + calcularIncremento(peso);
    }

    void Moto:: escribirInfo() const {
        std::cout << "Moto - Patente: " << Patente << ", Año: " << anioModelo << ", Tarifa: " << Tarifa << "\n";
    }