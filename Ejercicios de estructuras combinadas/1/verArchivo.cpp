#include<iostream>
#include<stdio.h>
using namespace std;
struct Arch{
    int codigo;
    int nivel;
    int cupo;
    char nombreDocente [35];
    int dniDocente;
};
int main(){
    char nombre[30];
    cin>>nombre;

    FILE*archivo=fopen(nombre,"rb");

    if(archivo==NULL)
        cout<<"NO SE PUEDE LEER UN ARCHIVO VACIO";
    else{
        Arch a;
        fread(&a,sizeof(Arch),1,archivo);
        while(!feof(archivo))
        {
            cout<<a.codigo<<" "<<a.nombreDocente<<" "<<a.dniDocente<<endl;
            fread(&a,sizeof(Arch),1,archivo);
        }
        fclose(archivo);
    }

return 0;}
