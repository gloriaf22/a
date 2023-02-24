#include <iostream>
using namespace std;

void cargarProd(int c[],float p[],int tam);
void ordenarPrecio(int v[],float b[],unsigned t);
void mostrar(int v[],float b[],unsigned t);
float consultaPrecio(int v[], float b[],unsigned t,unsigned indice);

int main(){
    unsigned cant,cod;

    cout<<"ingrese cantidad de productos"<<endl;
    cin>>cant;
    int codigo[cant];
    float precio[cant];

    cargarProd(codigo,precio,cant);
    ordenarPrecio(codigo,precio,cant);
    mostrar(codigo,precio,cant);

    cout<<"Ingrese codigo: ";
    cin>>cod;
    cout<<consultaPrecio(codigo,precio,cant,cod);

}
void cargarProd(int c[],float p[],int tam)
{
    for(int i=0;i<tam;i++){
        cout<<"Ingrese codigo de producto: ";
        cin>>c[i];
        cout<<endl;
        cout<<"Ingrese precio: ";
        cin>>p[i];
        cout<<endl;
    }
}
void ordenarPrecio(int v[],float b[],unsigned t){
    int mayor;
    float may;
    int pos;

    for (unsigned i=0;i<t-1;i++){
        mayor=v[i];
        may=b[i];
        pos=i;
        for(unsigned j=i+1;j<t;j++){
            if(b[j]>may){
                may=b[j];
                mayor=v[j];
                pos=j;
            }
        }
        b[pos]=b[i];
        v[pos]=v[i];
        b[i]=may;
        v[i]=mayor;

    }
}
void mostrar(int v[],float b[],unsigned t){
    for(unsigned i=0;i<t;i++){
        cout<<"cod: "<<v[i]<<"  precio: "<<b[i]<<endl;
    }
}
float consultaPrecio(int v[], float b[],unsigned t,unsigned indice){
    float precio;

    for(unsigned i=0;i<t;i++){
        if(v[i]==indice){
            precio=b[i];
        }
    }
    return precio;
}

