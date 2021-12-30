#include "bplus_doc.h"
// bplus doc

// Inserta un elemento al arbol
void bplus_doc::insert(int val)
{
    auto actual = findleaf(val);
    actual.insert(val);
    while (actual.is_overfull())
    {
        int temp=actual.split();
        actual = node_doc::cargar(temp);
    }
    if (actual.father==-1)
    {
        root = actual.id;
    }
}

bplus_doc::bplus_doc(int ord)
{
    order = ord;
    
    auto temp = new node_doc(order);
    root = temp->id;
    temp->is_leaf = true;
    temp->update();
}

//Imprime el arbol
void bplus_doc::print()
{
    // TODO: Agregar aqu� el c�digo de implementaci�n.
}


// busca el nodo hoja al cual meter el valor
node_doc bplus_doc::findleaf(int val)
{
    node_doc actual = node_doc::cargar(root);
    while (!actual.is_leaf)
    {
        int temp = 0;
        for (int a = 0; a < actual.values.size(); a++) {
            if (actual.values[a] < val) {
                temp++;
            }
        }
        actual = node_doc::cargar(actual.children[temp]);
    }
    return actual;
}


// informa si el elemento buscado esta en el arbol
bool bplus_doc::find(int val)
{
    // TODO: Agregar aqu� el c�digo de implementaci�n.
    return false;
}


// busqueda por rango
std::vector<int> bplus_doc::find_range(int min, int max)
{
    // TODO: Agregar aqu� el c�digo de implementaci�n.
    return std::vector<int>();
}


