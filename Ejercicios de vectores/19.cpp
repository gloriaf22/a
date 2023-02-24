#include<iostream>
using namespace std;

struct Producto{
    int nroDeProducto,unidades;
    char descripcion [30];
    float precio,comision;
};
struct Ventas{
    int nroVisitador,nroProducto,unidades;
};

int main(){
}
void ingresarProd(Producto v[]){
    int cp;
        cout<<"Ingrese nro de producto: ";
        cin>>cp;

    while(cp!=0){
        v[cp-1]=ingProd(cp-1);
        cout<<"Ingrese nro de producto: ";
        cin>>cp;

    }
}
Producto ingProd(int np){
    Producto p;
    p.nroDeProducto=np;
    cout<<"Ingrese Descrpicion de Producto: ";
    cin>>p.descripcion;
    cout<<endl<<"Ingrese Catidad de Unidades: ";
    cin>>p.unidades;
    cout<<endl<<"Ingrese precio: ";
    cin>>p.precio;
    cout<<endl<<"Ingrese porcentaje de comision: ";
    cin>>p.comision;
    return p;
}
void ingresarVenta(Ventas v[]){
    int cv;
    cout<<"Ingrese codigo de vendedor: ";
    cin>>cv;
    while(cv!=0){
        v[cv-1]=ven(cv);
        cout<<"Ingrese codigo de vendedor: ";
        cin>>cv;
    }
}
Ventas ven(int nv){
    Ventas v;
        cout<<"Ingrese nro de Producto: ";
        cin>>v[nv-1].nroProducto;
        cout<<"Ingrese Unidades Vendidas: ";
        cin>>v[nv-1].unidades;

        return v;
    }
}
