#include <iostream>
#include "Revista.h"
#include "Libro.h"
#include "Libreria.h"
using namespace std;


int main() {
    Libreria libreria("Mi Libreria");

 // Crear algunos objetos de tipo Fecha para las ventas
    Fecha fechaVenta1(15, 10, 2024);
    Fecha fechaVenta2(20, 10, 2024);
    Fecha fechaVenta3(25, 11, 2024);

    // Crear algunos libros
    Libro* libro1 = new Libro("12345", "Programacion en C++", 2020, 500.0, "Bjarne Stroustrup", "Editorial C++", true);
    Libro* libro2 = new Libro("67890", "Java para principiantes", 2018, 300.0, "Herbert Schildt", "Editorial Java", false);

    // Crear algunas revistas
    Revista* revista1 = new Revista("98765", "Ciencia qsyo", 2019, 150.0, 5, 2, "Ciencia");
    Revista* revista2 = new Revista("54321", "Tecnologias de aahora", 2016, 100.0, 10, 4, "Tecnologia");

    
      vector<ObraLiteraria*> obras;
      obras.push_back(libro1);
      obras.push_back(revista1);
   
    // Crear ventas y agregar artículos a las ventas
    libreria.crearVenta("V001", fechaVenta1, obras);
    obras.push_back(libro2);
    libreria.crearVenta("V002", fechaVenta2,obras);
      obras.push_back(revista2);
    libreria.crearVenta("V003", fechaVenta3,obras);

      std::cout << "INFORMACION de TUS ELECCIONES: " << std::endl;
     libro1->mostrarInfo();
    revista1->mostrarInfo();
    

    // Listar ventas por fecha
    std::cout << "Ventas: " << std::endl;
    libreria.listarVentasPorFecha(fechaVenta1);

    // Calcular recaudación mensual (octubre)
    double recaudacionOctubre = libreria.calcularRecaudacionMensual(10);
    std::cout << "Recaudacion total: $" << recaudacionOctubre << std::endl;

    cout<< libro1->calcularPrecioVenta()<<endl;
    cout<< revista1->calcularPrecioVenta();

   

    // Limpiar memoria
    delete libro1;
    delete libro2;
    delete revista1;
    delete revista2;

    return 0;


 }