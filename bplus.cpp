#include "bplus.h"


// Inserta un elemento al arbol
void bplus::insert(int val)
{
    node* actual = findleaf(val);
    // insertar valor en la hoja
    // verificar que este lleno
    // si esta lleno hacer split
    // repetir hasta llegar a la raiz o no se necesite un split.
    // TODO: Agregar aqu� el c�digo de implementaci�n.
}

bplus::bplus(int ord)
{
    order = ord;
    root = new node(order);
}

//Imprime el arbol
void bplus::print()
{
    // TODO: Agregar aqu� el c�digo de implementaci�n.
}


// busca el nodo hoja al cual meter el valor
node* bplus::findleaf(int val)
{
    //Desde aqu� modifico el findleaf
    int i = 0;
    while (i < n && k > keys[i])
        i++;

    // If the found key is equal to k, return this node
    if (keys[i] == k)
        return this;

    // If the key is not found here and this is a leaf node
    if (leaf == true)
        return NULL;

    // Go to the appropriate child
    return C[i]->search(k);

    // TODO: Agregar aqu� el c�digo de implementaci�n.
    return nullptr;
}


// informa si el elemento buscado esta en el arbol
bool bplus::find(int val)
{
    // TODO: Agregar aqu� el c�digo de implementaci�n.
    return false;
}


// busqueda por rango
std::vector<int> bplus::find_range(int min, int max)
{
    // TODO: Agregar aqu� el c�digo de implementaci�n.
    return std::vector<int>();
}


