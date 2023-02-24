#include<iostream>
#include<stdio.h>
#define MES 12
#define ACT 15
using namespace std;

struct Fecha{
    int dia;
    int mes;
    int anio;
};
struct Archivo4{
    int codAct;
    int nro;
    Fecha fech;
    int resul;
};
struct Atleta{
    int socio;
    int resultado;
};
struct Nodo{
    Atleta dato;
    Nodo*sig;
};

void generarAr();
void inicializarMatriz(Nodo*m[15][12]);
void cargarMatriz(Nodo*m[ACT][MES]);
void insertar(Nodo*&lista,Atleta atl);
void mostrar(Nodo*lista);
void puntoA(Nodo*m[ACT][MES]);
int total(Nodo*lista);
void puntoB(Nodo*m[ACT][MES]);
bool masPrimerPuesto(Nodo*lista);
void puntoC(Nodo*m[ACT][MES]);

int main(){
    Nodo*matriz[ACT][MES];
    generarAr();
    inicializarMatriz(matriz);
    cargarMatriz(matriz);
    puntoA(matriz);
    puntoB(matriz);
    puntoC(matriz);
return 0;}

void generarAr()
{
    Archivo4 a;
    FILE*ar=fopen("Competidores.dat","wb");
    cin>>a.codAct;
    while(a.codAct>0&&a.codAct<16){
        cin>>a.nro;
        cin>>a.fech.dia>>a.fech.mes>>a.fech.anio;
        cin>>a.resul;
        cout<<endl;
        fwrite(&a,sizeof(Archivo4),1,ar);
        cin>>a.codAct;
    }
    fclose(ar);
}

void inicializarMatriz(Nodo*m[15][12])
{
    for(int i=0;i<15;i++){
        for(int j=0;j<12;j++)
            m[i][j]=NULL;
    }
}

void cargarMatriz(Nodo*m[ACT][MES]){
    FILE*arch=fopen("Competidores.dat","rb");
    Archivo4 a;

    //if(arch!=NULL){
        fread(&a,sizeof(Archivo4),1,arch);
        while(!feof(arch)){
            Atleta atl;
            atl.socio=a.nro;
            atl.resultado=a.resul;
            insertar(m[a.codAct-1][a.fech.mes-1],atl);
            fread(&a,sizeof(Archivo4),1,arch);
        }
        fclose(arch);
    //}
}
void insertar(Nodo*&lista,Atleta atl)
{
    Nodo*ant,*r=lista,*p=new Nodo;
    p->dato=atl;
    while(r!=NULL && r->dato.socio<atl.socio)
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

void mostrar(Nodo*lista){
    Nodo*r=lista;
    while(r!=NULL)
    {
        cout<<r->dato.socio<<" "<<r->dato.resultado<<endl;
        r=r->sig;
    }
}

void puntoA(Nodo*m[ACT][MES]){
    for(int i=0;i<ACT;i++){
        cout<<"ACTIVIDAD "<<i+1<<endl;
        for(int j=0;j<MES;j++){
            cout<<"MES "<<j+1<<endl;
            mostrar(m[i][j]);
            cout<<endl;
        }
    }
}

void puntoB(Nodo*m[ACT][MES]){
    for(int i=0;i<ACT;i++){
        cout<<"ACTIVIDAD "<<i+1<<endl;
        for(int j=0;j<MES;j++){
            cout<<total(m[i][j])<<endl;
        }
        cout<<endl;
    }
}

int total(Nodo*lista){
    Nodo*p=lista;
    int tot=0;
    while(p!=NULL){
        tot++;
        p=p->sig;
    }
    return tot;
}

void puntoC(Nodo*m[ACT][MES]){
    for(int i=0;i<ACT;i++){
        for(int j=0;j<MES;j++){
            if(masPrimerPuesto(m[i][j]))
                cout<<"EN la actividad: "<<i+1<<" hubo mas de un primer puesto"<<endl;
        }
    }
}
bool masPrimerPuesto(Nodo*lista){
    Nodo*p=lista;
    int primer=0;
    while(p!=NULL){
        if(p->dato.resultado==1)
            primer++;
        p=p->sig;
    }
    return primer>1;
}
