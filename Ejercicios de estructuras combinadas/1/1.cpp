#include<iostream>
using namespace std;

struct Materiales{
    int fecha;
    float importe;
};
struct NodoSL{
    Materiales dato;
    NodoSL*sig;
};
struct Obra{
    int codigo;
    NodoSL*listaMateriales;
};
struct NodoL{
    Obra dato;
    NodoL*sig;
};

NodoL* buscarInsertar(NodoL*&lista,Obra ob);
void mostrar(NodoL*lista);
void mostrarCompra(NodoSL*lista);
void insertar(NodoSL*&lista,Materiales mat);
void generar(NodoL*&lista);

int main (){
    NodoL*lista=NULL;
    generar(lista);
    mostrar(lista);
return 0;}

void generar(NodoL*&lista){
    Materiales unMat;
    Obra unaObra;
    NodoL*p;

    cout<<"Ingrese codigo de OBRA: ";
    cin>>unaObra.codigo;
    while(unaObra.codigo!=0){
        cout<<"Ingrese fecha de la compra: ";
        cin>>unMat.fecha;
        cout<<"Ingrese importe de la compra: ";
        cin>>unMat.importe;
        unaObra.listaMateriales=NULL;

        p=buscarInsertar(lista,unaObra);

        insertar(p->dato.listaMateriales,unMat);
        cout<<"Ingrese codigo de OBRA: ";
        cin>>unaObra.codigo;
    }
}

void insertar(NodoSL*&lista,Materiales mat)
{
    NodoSL*p,*ant;
    NodoSL*n=new NodoSL;

    p=lista;
    n->dato=mat;

    while(p!=NULL&&p->dato.fecha<mat.fecha){
        ant=p;
        p=p->sig;
    }
    n->sig=p;
    if(p!=lista)
        ant->sig=n;
    else
        lista=n;
}
NodoL* buscarInsertar(NodoL*&lista,Obra ob)
{
    NodoL*ant,*p=lista;
    while(p!=NULL&&p->dato.codigo<ob.codigo){
        ant=p;
        p=p->sig;
    }
    if(p!=NULL&&ob.codigo==p->dato.codigo)
        return p;
    else{
        NodoL*n=new NodoL;
        n->dato=ob;
        n->sig=p;
        if(p!=lista)
            ant->sig=n;
        else
            lista=n;
        return n;
    }
}

void mostrar(NodoL*lista)
{
    NodoL*p=lista;
    Obra aux;
    FILE*archivo=fopen("puntoUno.dat","wb");

    while(p!=NULL){
        cout<<"CODIGO DE OBRA: "<<p->dato.codigo;
        mostrarCompra(p->dato.listaMateriales);
        aux=p->dato;
        fwrite(&aux,sizeof(Obra),1,archivo);
        cout<<endl,
        p=p->sig;
        cout<<"==============================="<<endl;
    }
    fclose(archivo);
}
void mostrarCompra(NodoSL*lista)
{
    NodoSL*q=lista;
    while(q!=NULL){
       cout<<endl<<q->dato.fecha<<" "<<q->dato.importe;
       q=q->sig;
    }
}
