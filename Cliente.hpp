#pragma once

#include <iostream>
#include "Carrito.hpp"

using namespace std;

class Cliente {
    private:
        string nombre;
        int codigo;
        Carrito carrito;
    public:
        Cliente();
        Cliente(string nombre, int codigo);
        Cliente(string nombre, int codigo, Carrito carrito);
        void setNombre(string nombre);
        void setCodigo(int codigo);
        void setCarrito(Carrito carrito);
        string getNombre();
        int getCodigo();
        Carrito getCarrito();
        void mostrar();
        ~Cliente();
};