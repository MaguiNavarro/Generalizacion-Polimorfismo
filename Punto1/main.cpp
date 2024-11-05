
#include "Sistema.h"
#include <iostream>
#include "Auto.h"
#include "Moto.h"

int main() {
    Sistema sistema;

    // Crear algunos vehículos
    Auto* auto1 = new Auto("ABC123", 2022, 500.0, 100.0,200.0);  // Capacidad de carga 500 kg, tarifa base 100
    Moto* moto1 = new Moto("XYZ789", 2021, 100.0, 50.0, 3);  

    // Registrar algunas encomiendas
    sistema.registrarEncomienda("Calle Falsa 123", "Avenida Siempre Viva 742", 5.0, auto1);
    sistema.registrarEncomienda("Calle Verdadera 456", "Boulevard Desilusion 321", 10.0,moto1 );

    sistema.cargarFechaEntrega(1, Fecha(10, 10, 2024));
    sistema.cargarFechaEntrega(2, Fecha(11, 10, 2024));

    // Listar entregas 
    sistema.listarEntrega(Fecha(11, 10, 2024));
     sistema.listarEntrega(Fecha(10, 10, 2024));
    // Limpiar memoria (el destructor de Sistema se encargará de liberar los vehículos también)
    delete auto1;
    delete moto1;

    return 0;

}