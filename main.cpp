#include <iostream>
#include "LLD.h"

using namespace std;

int main()
{
    cout << "Uso de LLD" << endl;
    Lista2 L;
    L = NULL;
    agregar(L,1);
    Listar(L);

    agregar(L,2);
    agregar(L,3);
    Mostrar(L);

    Eliminar(L);
    Listar(L);
    Eliminar(L);
    Listar(L);
    Eliminar(L);
    Listar(L);


    return 0;
}
