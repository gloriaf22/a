#include<iostream>
#include<stdio.h>
using namespace std;

struct Cobranza{
    int codCliente;
    int cuota;
};

int main(){
    char nombre[30];
    cin>>nombre;

    FILE*archivo=fopen(nombre,"rb");

    if(archivo==NULL)
        cout<<"NO SE PUEDE LEER UN ARCHIVO VACIO";
    else{
        Cobranza a;
        fread(&a,sizeof(Cobranza),1,archivo);
        while(!feof(archivo))
        {
            cout<<a.codCliente<<" "<<a.cuota<<endl; //###CAMBIAR ESTO
            fread(&a,sizeof(Cobranza),1,archivo);
        }
        fclose(archivo);
    }

return 0;}
