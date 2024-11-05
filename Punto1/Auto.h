#define AUTO_H
#include <iostream>
#include "vehiculo.h" 
using namespace std;
 

class Auto : public Vehiculo{
private:
  double limiteMin ;
  const double BONUS = 0.10;

public:
   Auto(string patente, int anioModelo, double pesoMax, double tarifa, double limiteMin);
   double calcularPrecioViaje(double peso) const override;
   void escribirInfo()const override ;


};

