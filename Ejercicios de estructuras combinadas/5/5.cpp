#include<iostream>
#include<stdio.h>
using namespace std;

struct Cobranza{
    int codCliente;
    int cuota;
};
struct Nodo{
    Cobranza dato;
    Nodo*sig;
};

void genArchivo();
void generar(Nodo*&lista);
void mostrar(Nodo*lista);
void insertar(Nodo*&lista,Cobranza c);

/*#################################################################*/
int main(){
    Nodo*lista=NULL;
    //genArchivo();
    generar(lista);
    mostrar(lista);
return 0;}
/*#################################################################*/
void genArchivo()
{
    FILE*ar=fopen("Cobranzas.dat","wb");
    Cobranza c;
    cout<<"COD CLIENTE: ";
    cin>>c.codCliente;
    while(c.codCliente!=0){
        cout<<"NRO DE CUOTA: ";
        cin>>c.cuota;
        fwrite(&c,sizeof(Cobranza),1,ar);
        cout<<"COD CLIENTE: ";
        cin>>c.codCliente;
    }
    fclose(ar);
}

void generar(Nodo*&lista){
    FILE*arch=fopen("Cobranzas.dat","rb");
    Cobranza c;

    fread(&c,sizeof(Cobranza),1,arch);
    while(!feof(arch)){
        insertar(lista,c);
        fread(&c,sizeof(Cobranza),1,arch);
    }
    fclose(arch);
}
void mostrar(Nodo*lista)
{
    Nodo*p=lista;
    while(p!=NULL){
        cout<<"A "<<p->dato.codCliente<<" LE FALTA PAGAR "<<12-p->dato.cuota<<" CUOTA/S"<<endl;
        p=p->sig;
    }
}
void insertar(Nodo*&lista,Cobranza c)
{
    Nodo*ant,*r=lista,*p=new Nodo;
    p->dato=c;
    while(r!=NULL && r->dato.codCliente<c.codCliente)
    {
        ant=r;
        r=r->sig;
    }
    if(r==lista)
        lista=p;
    else
        ant->sig=p;
    p->sig=r;
}
