#include <iostream>
#include "LLD.h"

using namespace std;

void agregar(Lista2 &L, int e)
{
    Lista2 p;
    p = new Nodo;
    p->Info = e;
    p->ant = NULL;
    p->sig = L;
    if(L != NULL)
        L->ant = p;
    L = p;
}

void Listar(Lista2 L){
    cout << endl;
    if(L!=NULL){
        cout << "Valor : " << L->Info << endl;
        Listar(L->sig);
    }
}

void Mostrar(Lista2 L){
    cout << endl;
    Lista2 p;
    p=L;
    while(p != NULL){
        cout << "Valor : " << p->Info << endl;
        p = p->sig;
    }
}

void Eliminar(Lista2 &L)
{
    cout << "eliminando ... " << endl;
    if(L != NULL)
    {
        if(L->sig==NULL)
        {
            delete L;
            L = NULL;
        }
        else
        {
            L = L->sig;
            delete L->ant;
            L->ant = NULL;
        }
    }
}
