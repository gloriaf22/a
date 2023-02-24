#include<iostream>
using namespace std;

struct Creditos{
    int codigo;
};

struct Nodo{
    int dato;
    Nodo*sig;
};

void insertar(Nodo*&lista,int nro);
void mostrar(Nodo*lista);

int main(){
    Nodo*lista=NULL;
    insertar(lista,25);
    insertar(lista,35);
    insertar(lista,15);
    insertar(lista,55);
    mostrar(lista);
return 0;}

//INSERTAR SIN ORDEN
void insertar(Nodo*&lista,int nro)
{
    Nodo*n,*p,*ant;
    n=new Nodo;
    n->dato=nro;
    p=lista;
    while(p!=NULL)
    {
        ant=p;
        p=p->sig;
    }
    n->sig=p;
    if(p!=lista)
        ant->sig=n;
    else
        lista=n;
}

void mostrar(Nodo*lista){
    Nodo*p=lista;
    while(p!=NULL){
        cout<<p->dato<<endl;
        p=p->sig;
    }
}
