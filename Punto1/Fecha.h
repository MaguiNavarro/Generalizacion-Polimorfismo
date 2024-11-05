#include <iostream>
using namespace std;

class Fecha
{
private:
    int Dia,Mes,Anio;
public:
    Fecha();
    Fecha(int dia, int mes , int anio);
     int   getDia()const ;
     int   getMes()const ;
     int   getAnio()const ;
      void  mostrarFecha() ;
    
       // Método que recibe el año actual ingresado por el usuario y compara si es un estreno reciente
    bool esEstreno() const ;

};


