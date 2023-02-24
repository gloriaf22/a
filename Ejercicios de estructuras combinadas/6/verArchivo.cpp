#include<iostream>
#include<stdio.h>
using namespace std;

struct Archivo6{
    char pat[7];
    int fecha;
    int codInf;
};
int main(){
    char nombre[30];
    cin>>nombre;

    FILE*archivo=fopen(nombre,"rb");

    if(archivo==NULL)
        cout<<"NO SE PUEDE LEER UN ARCHIVO VACIO";
    else{
        Archivo6 a;
        fread(&a,sizeof(Archivo6),1,archivo);
        while(!feof(archivo))
        {
            cout<<a.fecha<<" "<<a.pat<<" "<<a.codInf<<endl; //###CAMBIAR ESTO
            fread(&a,sizeof(Archivo6),1,archivo);
        }
        fclose(archivo);
    }

return 0;}
