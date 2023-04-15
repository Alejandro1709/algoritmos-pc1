#include "Cliente.hpp"

Cliente::Cliente() {
    nombre = "";
    codigo = 0;
};

Cliente::Cliente(string nombre, int codigo, Carrito carrito) {
    this->nombre = nombre;
    this->codigo = codigo;
    this->carrito = carrito;
};

Cliente::Cliente(string nombre, int codigo) {
    this->nombre = nombre;
    this->codigo = codigo;
};

void Cliente::setNombre(string nombre) {
    this->nombre = nombre;
};

void Cliente::setCodigo(int codigo) {
    this->codigo = codigo;
};

void Cliente::setCarrito(Carrito carrito) {
    this->carrito = carrito;
};

string Cliente::getNombre() {
    return nombre;
};

int Cliente::getCodigo() {
    return codigo;
};

Carrito Cliente::getCarrito() {
    return carrito;
};

void Cliente::mostrar() {
    cout << "Nombre: " << nombre << endl;
    cout << "Codigo: " << codigo << endl;
    for (int i = 0; i < carrito.getCantidadProductos(); i++) {
        carrito.getProductos()[i].mostrar();
    }
};

Cliente::~Cliente() {
};