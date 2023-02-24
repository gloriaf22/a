#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

struct Archivo6{
    char pat[7];
    int fecha;
    int codInf;
};
struct Auto{
    char patente[7];
};
struct NodoSL{
    Auto dato;
    NodoSL*sig;
};
struct Infraccion{
    int codigo;
    NodoSL*listaPat;
};
struct NodoL{
    Infraccion infra;
    NodoL*sig;
};

void genArchivo();
void generar(NodoL*&lista);
void insertar(NodoSL*&lista,Auto a);
NodoL* buscarInsertar(NodoL*&lista,Infraccion i);
void mostrar(NodoL*lista);
void mostrarAu(NodoSL*lista);

int main(){
    NodoL*lista=NULL;
    //genArchivo();
    generar(lista);
    mostrar(lista);
return 0;}

void genArchivo()
{
    FILE*arch=fopen("Infracciones.dat","wb");
    Archivo6 a;

    cout<<"CODIGO DE INFRACCION: ";
    cin>>a.codInf;
    while(a.codInf!=0){
        cout<<"PATENTE: ";
        cin>>a.pat;
        cout<<"FECHA: ";
        cin>>a.fecha;
        fwrite(&a,sizeof(Archivo6),1,arch);
        cout<<"CODIGO DE INFRACCION: ";
        cin>>a.codInf;
    }
    fclose(arch);
}

void generar(NodoL*&lista){
    FILE*ar=fopen("Infracciones.dat","rb");
    Auto a;
    Infraccion i;
    Archivo6 dat;
    NodoL*p;

    fread(&dat,sizeof(Archivo6),1,ar);
    while(!feof(ar)){
        strcpy(a.patente,dat.pat);
        i.codigo=dat.codInf;
        i.listaPat=NULL;

        p=buscarInsertar(lista,i);
        insertar(p->infra.listaPat,a);
        fread(&dat,sizeof(Archivo6),1,ar);
    }
    fclose(ar);
}
void insertar(NodoSL*&lista,Auto a)
{
    NodoSL*n,*p,*ant;
    n=new NodoSL;
    n->dato=a;
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

NodoL* buscarInsertar(NodoL*&lista,Infraccion i)
{
    NodoL*ant,*p=lista;
    while(p!=NULL && p->infra.codigo >i.codigo)
    {
       ant=p;
       p=p->sig;
    }
    if(p!=NULL && i.codigo==p->infra.codigo)
        return p;
    else
    {
        NodoL*n=new NodoL;
        n->infra=i;
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
    NodoSL*patentes=NULL;
    NodoL*p=lista;
    while(p!=NULL){
        cout<<p->infra.codigo<<endl;
        mostrarAu(p->infra.listaPat);
        cout<<endl;
        p=p->sig;
    }
}

void mostrarAu(NodoSL*lista/*,NodoSL*&patentes*/)
{
    NodoSL*p=lista;
    NodoSL*pri=lista;
    int tam=0;
    char masInfra[7];
    while(p!=NULL){
        cout<<p->dato.patente<<endl;
        tam++;
        p=p->sig;
    }
    /*
    p=pri->sig;
    for(int i=0;i<tam-1;i++){
        for(int j=1+i;j<tam;j++){
            if(strcmpi(pri->dato.patente,p->dato.patente)==0){
                NodoSL*r=new NodoSL
            }
        }
    }*/
}
