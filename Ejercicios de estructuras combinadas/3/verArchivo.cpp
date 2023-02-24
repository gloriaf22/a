#include<iostream>
#include<stdio.h>
using namespace std;
struct Ventas{
    int nroFactura;
    int codVendedor;
    float importe;
};
int main(){
    char nombre[30];
    cin>>nombre;

    FILE*archivo=fopen(nombre,"rb");

    if(archivo==NULL)
        cout<<"NO SE PUEDE LEER UN ARCHIVO VACIO";
    else{
        Ventas v;
        fread(&v,sizeof(Ventas),1,archivo);
        while(!feof(archivo))
        {
            cout<<v.nroFactura<<endl;
            fread(&v,sizeof(Ventas),1,archivo);
        }
        fclose(archivo);
    }

return 0;}
