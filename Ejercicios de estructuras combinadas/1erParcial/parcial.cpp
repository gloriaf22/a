#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

struct Creditos{
    int codigo;
    char desc[30];
    int cupoMax;
};
struct NodoL{
    Creditos dato;
    NodoL*sig;
};
struct Inscriptos{
    unsigned dni;
    char nomYap[50];
    int codigoCred;
    float ingMensual;
};
struct NodoC{
    Inscriptos dato;
    NodoC*sig;
};
struct NodoCredito{
    Credito dato;
    NodoSL*listaIns;
    NodoCredito*sig;
};
struct NodoSL{
    Inscriptos dato;
    NodoSL*sig;
};

int main(){
    NodoC*pri=NULL;
    NodoC*ult=NULL;
    NodoL*listaCreditos=NULL;
    Nodo
}

void armarEstructuras(NodoC*&pri,NodoC*&ult,NodoL*&lista){
    FILE*arch=fopen("Creditos.dat","rb");
    Creditos c;

    if(arch!=NULL){
        fread(&c,sizeof(Creditos),1,arch);
        while(!feof(arch)){
            insertar(lista,c);
            fread(&c,sizeof(Creditos),1,arch);
        }
    }
    fclose(arch);
    FILE*archi=fopen("inscriptos.dat","rb");
    Inscriptos i;

    if(archi!=NULL){
        fread(&i,sizeof(Inscriptos),1,archi);
        while(!feof(archi)){
            encolar(pri,ult,i);
            fread(&i,sizeof(Inscriptos),1,archi);
        }
    }
    fclose(archi);
}

void insertar(NodoL*&lista,Creditos c)
{
    NodoL*n,*p,*ant;
    n=new NodoL;
    n->dato=c;
    p=lista;
    while(p!=NULL&&p->dato.codigo<c.codigo)
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

void encolar(NodoC*&pri,NodoC*&ult,Inscriptos i){
    NodoC*p=new NodoC;
    p->dato=i;
    p->sig=NULL;

    if(ult!=NULL)
        ult->sig=p;
    else
        pri=p;
    ult=p;
}

Inscriptos desencolar(NodoC*&pri,NodoC*&ult){
    Inscriptos i;
    NodoC*p=pri;

    i.dni=p->dato.dni;
    i.codigoCred=p->dato.codigoCred;
    i.ingMensual=p->dato.ingMensual;
    strcpy(i.nomYap,p->dato.nomYap);
    pri=p->sig;
    delete p;
    if(pri==NULL)
        ult=NULL;
    return i;
}

void mostrarListado()
{
}
