#define ENCOMIENDA_H
#include <iostream>
#include "Fecha.h"
#include "Vehiculo.h"
using namespace std;

class Encomienda
{
private:
  static int autonumerico;
  int codigoEncomienda;
  string dirOrigen;
  string dirDestino;
  Fecha fechaIngreso;
  Fecha fechaEntrega;
  bool entregado;
  double pesoEncomienda;
  Vehiculo *vehiculo;

public:
  
    Encomienda(string origen, string destino,Fecha ingreso, double peso, Vehiculo* vehiculo);
    void escribirInfo()const ;
    void setFechaEntrega(Fecha fecha);
    Fecha getFechaEntrega()const;
    int getCodigo()const;
    double calcularPrecioEncomienda()const;
    double getPeso()const;
    ~Encomienda();
   
};



