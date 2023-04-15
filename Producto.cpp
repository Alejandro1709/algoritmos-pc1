#include "Producto.hpp"

Producto::Producto() {
    nombre = "N/A";
    cantidad = 0;
    precio = 0.0;
}

Producto::Producto(string nombre, int cantidad, float precio) {
    this->nombre = nombre;
    this->cantidad = cantidad;
    this->precio = precio;
}

void Producto::setNombre(string nombre) {
    this->nombre = nombre;
}

void Producto::setCantidad(int cantidad) {
    this->cantidad = cantidad;
}

void Producto::setPrecio(float precio) {
    this->precio = precio;
}

string Producto::getNombre() {
    return nombre;
}

int Producto::getCantidad() {
    return cantidad;
}

float Producto::getPrecio() {
    return precio;
}

void Producto::mostrar() {
    cout << "Nombre: " << nombre << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Precio: " << precio << endl;
}

Producto::~Producto() {
}