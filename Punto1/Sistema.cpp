#include <iostream>
#include "Sistema.h"

using namespace std;

void Sistema:: registrarEncomienda(string origen, string destino, double peso, Vehiculo* vehiculo){
    Fecha fechaIngreso= obtenerFechaSistema();
     Encomienda *nuevaEncomienda= new Encomienda (origen, destino, fechaIngreso,peso, vehiculo );
  registrar(nuevaEncomienda);

}

void Sistema::registrar(Encomienda* nuevaEncomienda) {
    encomiendas.push_back(nuevaEncomienda);  // Agrega el puntero al vector
}


Fecha Sistema::obtenerFechaSistema() {
    // Supongamos que esta función obtiene la fecha actual del sistema.
   
    return Fecha(8, 10, 2024);
}
   
void Sistema::cargarFechaEntrega(int codigo, Fecha fecha) {
    for (Encomienda* e : encomiendas) { // Aquí estás iterando sobre encomiendas, que es un vector de punteros    a                                     Encomienda. Por lo tanto, cada elemento e es un puntero (Encomienda*).
        if (e->getCodigo()== codigo) {
            e->setFechaEntrega(fecha);
            break;
        }
    }
}   
   void Sistema::listarEntrega(Fecha fecha) {
    double recaudacion = 0;
    for (Encomienda* e : encomiendas) {
        if (e->getFechaEntrega().getDia() == fecha.getDia() && e->getFechaEntrega().getMes() == fecha.getMes() && e->getFechaEntrega().getAnio() == fecha.getAnio()) {
            e->escribirInfo();
            recaudacion += e->calcularPrecioEncomienda();
        }
    }
    std::cout << "Recaudacion total: " << recaudacion << std::endl;
}
 Sistema::~Sistema() {
    for (Encomienda* e : encomiendas) {
        delete e;  // Liberar cada encomienda almacenada en el heap
        }
     }