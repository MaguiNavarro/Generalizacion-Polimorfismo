#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
using namespace std;
 
 class Vehiculo
 {
protected:
   string Patente;
   int anioModelo;
   double pesoMax;
   static constexpr double INCREMENTO = 0.25;
   double Tarifa;
   virtual double calcularIncremento(double peso) const ;

private:
    bool pesoExcedido(double peso) const;
   
 public:
        Vehiculo(string patente, int modelo, double peso, double Tarifa);
    virtual void escribirInfo()const = 0;  // Método virtual puro
    double getTarifa()const;
    virtual double calcularPrecioViaje(double peso)const = 0; // Método virtual puro

    virtual ~Vehiculo();
 };
 
 #endif // VEHICULO_H

 

 