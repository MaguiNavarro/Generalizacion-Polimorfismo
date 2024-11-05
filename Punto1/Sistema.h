#define SISTEMA_H
#include <iostream>
#include <vector>
#include "Encomienda.h"
using namespace std;

class Sistema
{
private:
    vector<Encomienda*> encomiendas;  
public:
  
    void registrarEncomienda(string origen, string destino, double peso, Vehiculo* vehiculo);
    void cargarFechaEntrega(int codigo, Fecha fecha);
    void listarEntrega(Fecha fecha);
    Fecha obtenerFechaSistema();
    void registrar(Encomienda* nuevaEncomienda);
    ~Sistema();
};



