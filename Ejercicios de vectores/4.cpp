#include<iostream>
using namespace std;

void cargarVector(int  a[]);
void mostrarVector(int a[]);
int mayor(int a[]);
int main(){
    int a[5];

    cout<<"Ingrese 5 valores"<<endl;
    cargarVector(a);
    mostrarVector(a);
    cout<<endl;
    cout<<mayor(a);

return 0;}

void cargarVector(int a[]){
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
}
void mostrarVector(int a[]){
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}
int mayor(int a[]){
    int mayor=0;

    for(int i=0;i<5;i++){
        if(a[i]>mayor)
            mayor=a[i];
    }
    return mayor;
}
