#include<iostream>
#include<stdio.h>
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

int main(){
    char nombre[30];
    cin>>nombre;

    FILE*archivo=fopen(nombre,"rb");

    if(archivo==NULL)
        cout<<"NO SE PUEDE LEER UN ARCHIVO VACIO";
    else{
        Archivo4 a;
        fread(&a,sizeof(Archivo4),1,archivo);
        while(!feof(archivo))
        {
            cout<<a.fech.mes<<" "<<a.codAct<<endl;
            fread(&a,sizeof(Archivo4),1,archivo);
        }
        fclose(archivo);
    }

return 0;}
