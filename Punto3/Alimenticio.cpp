#include "Alimenticio.h"
#include <iostream>
#include <ctime>
using namespace std;

Alimenticio:: Alimenticio(int cod, string desc, double precio, int mesVenc, int anioVenc, bool celiacos)
 : Producto(cod, desc, precio), mesVence(mesVenc), anioVence(anioVenc), esCeliaco(celiacos) {}


   bool Alimenticio:: estaVencido() const {
        time_t t = time(0);
        tm* now = localtime(&t);
        int currentYear = now->tm_year + 1900;
        int currentMonth = now->tm_mon + 1;
        return (anioVence < currentYear) || (anioVence == currentYear && mesVence < currentMonth);
    }

    bool Alimenticio:: esAptoCeliacos() const { return esCeliaco; }

    void Alimenticio:: mostrarInfo() const {
        Producto::mostrarInfo();
        cout << "Mes de vencimiento: " << mesVence << ", Año de vencimiento: " << anioVence << endl;
        cout << "Apto para celiacos: " << (esCeliaco ? "Si" : "No") << endl;
        cout << "Precio con IVA: $" << calcularPrecio() << endl;
    }
      double Alimenticio:: calcularPrecio() const  {
        return precioBase * IVA;
    }