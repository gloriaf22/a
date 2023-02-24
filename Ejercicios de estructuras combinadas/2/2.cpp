#include<iostream>
#include<stdio.h>
using namespace std;
//SOLO HICE EL 2A PORQUE EL 2B ES BASICAMENTE CREAR UN ARCHIVO
struct Ventas{
    int nroFactura;
    int codVendedor;
    float importe;
};
struct Venta{
    int nroFactura;
    float importe;
};
struct NodoSL{
    Venta dato;
    NodoSL*sig;
};
struct Vendedor{
    int codigo;
    NodoSL*listaVentas;
};
struct NodoL{
    Vendedor dato;
    NodoL*sig;
};
void genArchivo();

void generar(NodoL*&lista);
void insertar(NodoSL*&lista,Venta v);
NodoL* buscarInsertar(NodoL*&lista,Vendedor ven);
void mostrar(NodoL*lista);
void mostrarVen(NodoSL*lista);

int main()
{
    NodoL*lista=NULL;
    //genArchivo();
    generar(lista);
    mostrar(lista);
return 0;}

void genArchivo()
{
    FILE*arch=fopen("VENTAS.DAT","wb");
    Ventas v;
    cout<<"INGRESE NRO FACTURA: ";
    cin>>v.nroFactura;
    while(v.nroFactura!=0){
        cout<<"INGRESE CODIGO DE VENDEDOR: ";
        cin>>v.codVendedor;
        cout<<"INGRESE IMPORTE: ";
        cin>>v.importe;

        fwrite(&v,sizeof(Ventas),1,arch);

        cout<<"INGRESE NRO FACTURA: ";
        cin>>v.nroFactura;
    }
    fclose(arch);
}
void generar(NodoL*&lista){
    Vendedor ven;
    Venta v;
    NodoL*p;

    FILE*arch=fopen("VENTAS.DAT","rb");
    if(arch!=NULL){
        Ventas av;
        fread(&av,sizeof(Ventas),1,arch);
        while(!feof(arch)){
            ven.codigo=av.codVendedor;
            ven.listaVentas=NULL;
            v.importe=av.importe;
            v.nroFactura=av.nroFactura;
            p=buscarInsertar(lista,ven);

            insertar(p->dato.listaVentas,v);
            fread(&av,sizeof(Ventas),1,arch);
        }
    }
}

void insertar(NodoSL*&lista,Venta v)
{
    NodoSL*n,*p,*ant;
    n=new NodoSL;
    n->dato=v;
    p=lista;
    while(p!=NULL && p->dato.importe < v.importe)
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

NodoL* buscarInsertar(NodoL*&lista,Vendedor ven)
{
    NodoL*ant,*p=lista;
    while(p!=NULL && p->dato.codigo <ven.codigo)
    {
       ant=p;
       p=p->sig;
    }
    if(p!=NULL && ven.codigo==p->dato.codigo)
        return p;
    else
    {
        NodoL*n=new NodoL;
        n->dato=ven;
        n->sig=p;
        if(p!=lista)
            ant->sig=n;
        else
            lista=n;
        return n;
   }
}
void mostrar(NodoL*lista){
    NodoL*p=lista;
    while(p!=NULL){
        cout<<p->dato.codigo<<endl;
        mostrarVen(p->dato.listaVentas);
        cout<<"============================"<<endl;
        p=p->sig;
    }
}
void mostrarVen(NodoSL*lista){
    NodoSL*p=lista;
    while(p!=NULL){
        cout<<p->dato.nroFactura<<" "<<p->dato.importe<<endl;
        p=p->sig;
    }
}
