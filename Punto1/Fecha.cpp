#include <iostream>
#include "Fecha.h"
#include <ctime> // Para obtener la fecha actual
using namespace std;

 Fecha:: Fecha() : Dia(0), Mes(0), Anio(0) {}  // Constructor por defecto
Fecha::Fecha(int dia, int mes, int anio)
{
    Dia = dia;
    Mes = mes;
    Anio = anio;
}

int Fecha ::getDia() const
{
    return Dia;
}
int Fecha ::getMes() const
{
    return Mes;
}
int Fecha ::getAnio() const
{
    return Anio;
}
// Método que recibe el año actual ingresado por el usuario y compara si es un estreno reciente
bool Fecha::esEstreno() const
{
    int anioActual = 2024;
    return Anio == anioActual;
}

void Fecha::mostrarFecha() 
{

    std::cout << Dia << "/" << Mes << "/" << Anio <<endl;
}