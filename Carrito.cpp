#include "Carrito.hpp"

Carrito::Carrito() {
    codigo = 0;
    productos = NULL;
};

Carrito::Carrito(int codigo, Producto *productos, Cliente cliente) {
    this->codigo = codigo;
    this->productos = productos;
    this->cliente = cliente;
};

void Carrito::setProductos(Producto *productos) {
    this->productos = productos;
};

void Carrito::setCodigo(int codigo) {
    this->codigo = codigo;
};

void Carrito::setCliente(Cliente cliente) {
    this->cliente = cliente;
};

void Carrito::setCantidadProductos(int cantidadProductos) {
    this->cantidadProductos = cantidadProductos;
};

Producto *Carrito::getProductos() {
    return productos;
};

Cliente Carrito::getCliente() {
    return cliente;
};

int Carrito::getCodigo() {
    return codigo;
};

int Carrito::getCantidadProductos() {
    return cantidadProductos;
};

void Carrito::mostrar() {
    cout << "Codigo: " << codigo << endl;
    for (int i = 0; i < this->cantidadProductos; i++) {
        this->productos[i].mostrar();
    }
    cliente.mostrar();
};

void Carrito::agregarProducto(Producto producto) {
    Producto *temp = new Producto[cantidadProductos + 1];
    for (int i = 0; i < cantidadProductos; i++) {
        temp[i] = productos[i];
    }
    temp[cantidadProductos] = producto;
    cantidadProductos++;
    productos = temp;
};

void Carrito::eliminarProducto(int codigo, int pos) {
    Producto *temp = new Producto[cantidadProductos - 1];
    for (int i = 0; i < cantidadProductos; i++) {
        if (i < pos) {
            temp[i] = productos[i];
        } else if (i > pos) {
            temp[i - 1] = productos[i];
        }
    }
    cantidadProductos--;
    productos = temp;
};

void Carrito::modificarProducto(int codigo, int pos, string nombre, float precio) {
    Producto *temp = new Producto[cantidadProductos];

    for (int i = 0; i < cantidadProductos; i++) {
        if (i == pos) {
            temp[i] = productos[i];
            temp[i].setNombre(nombre);
            temp[i].setPrecio(precio);
        } else {
            temp[i] = productos[i];
        }
    }
};

void Carrito::mostrarPedidos() {
    for (int i = 0; i < cantidadProductos; i++) {
        productos[i].mostrar();
    }
};

Carrito::~Carrito() {
};