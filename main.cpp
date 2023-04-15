#include <iostream>
#include "Producto.hpp"
#include "Carrito.hpp"
#include "Cliente.hpp"

using namespace std;

int main() {
    cout << "Hello World!" << endl;

    Producto producto = Producto("Coca Cola", 1, 1.32);

    Producto *productos = new Producto[1];

    Cliente cliente = Cliente("Juan", 123);

    Carrito carrito = Carrito(13, productos, cliente);

    carrito.agregarProducto(producto);

    carrito.mostrar();
    return 0;
}