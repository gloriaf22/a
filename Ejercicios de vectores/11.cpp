#include <iostream>
using namespace std;

struct Producto{
    int codigo;
    float precio;
};

void cargar(Producto v[],int t);
Producto ingresarProd();
void ordenarProd(Producto v[],int t);
void mostrarV(Producto v[],int t);
int buscarCod(Producto v[], int t, int bus);

int main(){
    int cant,cod;
    cout<<"ingrese cantidad de productos: ";
    cin>>cant;
    cout<<endl;
    Producto vecProductos[cant];

    cargar(vecProductos,cant);
    ordenarProd(vecProductos,cant);
    mostrarV(vecProductos,cant);
    cout<<"ingrese cod: ";
    cin>>cod;
    cout<<vecProductos[buscarCod(vecProductos,cant,cod)].precio;
}
void cargar(Producto v[],int t){
    for(int i=0;i<t;i++){
        v[i]= ingresarProd();
    }
}
Producto ingresarProd(){
    Producto p;
    cout<<"Ingrese codigo de producto: ";
    cin>>p.codigo;
    cout<<"Ingrese precio: ";
    cin>>p.precio;
    return p;
}
void ordenarProd(Producto v[],int t){
    int mayor,pos;
    Producto aux;

    for(int i=0;i<t-1;i++){
        mayor=v[i].precio;
        pos=i;
        for(int j=i+1;j<t;j++){
            if(v[j].precio>mayor){
                mayor=v[j].precio;
                pos=j;
            }
        }
        aux=v[pos];
        v[pos]=v[i];
        v[i]=aux;
    }
}
void mostrarV(Producto v[],int t){
    for (int i=0;i<t;i++){
        cout<<"Cod: "<<v[i].codigo<<" Precio: $"<<v[i].precio<<endl;
    }
}
int buscarCod(Producto v[], int t, int bus){
    int pos;
    for(int i=0;i<t;i++){
        if(v[i].codigo==bus){
            pos=i;
        }
    }
    return pos;
}
