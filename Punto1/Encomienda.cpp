#include <iostream>
#include "Encomienda.h"

using namespace std;
int Encomienda:: autonumerico=1;
Encomienda::Encomienda(string origen, string destino, Fecha ingreso, double peso, Vehiculo* vehiculo)
  {
       codigoEncomienda= autonumerico++;
       dirOrigen=origen;
       dirDestino=destino;
       fechaIngreso= ingreso;
       pesoEncomienda=peso;
       entregado= false;
       

    if (peso <= 0) {
       cout<< "El peso debe ser mayor que cero"  <<endl;
    }
}

void Encomienda::setFechaEntrega(Fecha fecha) {  //No lleva const,  ya que estoy modificando los valores 
        fechaEntrega = fecha;
        entregado= true;
}
Fecha Encomienda::getFechaEntrega() const{
    return fechaEntrega;
}

int Encomienda::getCodigo()const {
    return codigoEncomienda;
}

   double Encomienda :: calcularPrecioEncomienda() const {
        if (vehiculo) {
            double peso = getPeso();
            return vehiculo->calcularPrecioViaje(peso);
        }
        return 0.0; // Manejo de caso en que vehiculo es nullptr
    }

double Encomienda::getPeso() const {
    return pesoEncomienda;
}

void Encomienda::escribirInfo()const {
    std::cout << "Encomienda #" << codigoEncomienda << " - Origen: " << dirOrigen << ", Destino: " << dirDestino << "\n";
}

 Encomienda:: ~Encomienda(){
     delete vehiculo;
 }