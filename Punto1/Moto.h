#define MOTO_H
#include <iostream>
#include "Vehiculo.h" 
using namespace std;

class Moto : public Vehiculo
{
private:
  double cilindrada;
public:
    Moto(string patente, int anoModelo, double pesoMax, double tarifa, double cilindrada);
  

      double calcularPrecioViaje(double peso) const override ;
    void escribirInfo() const  override;
};


