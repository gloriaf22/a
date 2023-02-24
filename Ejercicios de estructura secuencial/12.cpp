#include<iostream>
using namespace std;

//12.Se desea calcular el valor del cambio de monedas en Dólares y Euros ingresando la
//cantidad en Pesos.

int main(){
    float pesos;
    const float dolar=0.0089;
    const float euro=0.0081;

    cin>>pesos;
    cout<<"dolar: "<<pesos*dolar<<endl<<"euro: "<<pesos*euro;
return 0;}
