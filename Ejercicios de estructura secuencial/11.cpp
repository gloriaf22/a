#include<iostream>
using namespace std;

//11.En una empresa vendedora de alambres se quiere calcular el precio de un pedido. Para ello
//se ingresa los metros pedidos. El precio del alambre es de 10,50 Pesos por metro.

int main(){
    float mts;
    const float precio=10.50;

    cin>>mts;
    cout<<mts*precio<<" pesos";
return 0;}
