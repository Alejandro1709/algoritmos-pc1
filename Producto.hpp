#pragma once

#include <iostream>

using namespace std;

class Producto {
    private:
        string nombre;
        int cantidad;
        float precio;
    public:
        Producto();
        Producto(string nombre, int cantidad, float precio);
        void setNombre(string nombre);
        void setCantidad(int cantidad);
        void setPrecio(float precio);
        string getNombre();
        int getCantidad();
        float getPrecio();
        void mostrar();
        ~Producto();
};