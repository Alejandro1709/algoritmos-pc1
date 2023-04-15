#pragma once

#include <iostream>
#include "Producto.hpp"
#include "Cliente.hpp"

using namespace std;

class Carrito {
    private:
        int codigo;
        int cantidadProductos;
        Producto *productos;
        Cliente cliente;
    public:
        Carrito();
        Carrito(int codigo, Producto *productos, Cliente cliente);
        void setProductos(Producto *productos);
        void setCodigo(int codigo);
        void setCliente(Cliente cliente);
        void setCantidadProductos(int cantidadProductos);
        Producto *getProductos();
        Cliente getCliente();
        int getCantidadProductos();
        int getCodigo();
        void mostrar();
        void agregarProducto(Producto producto);
        void eliminarProducto(int codigo, int pos);
        void modificarProducto(int codigo, int pos, string nombre, float precio);
        void mostrarPedidos();
        ~Carrito();
};