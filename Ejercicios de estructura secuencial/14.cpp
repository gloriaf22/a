#include<iostream>
#define Arena 0.5
using namespace std;

/*14.Un empresario constructor sabe que necesita 0,5 metros cúbicos de arena por metro
cuadrado de revoque a realizar. Hacer un programa donde ingrese las medidas de una
pared (largo y alto) expresada en metros y obtenga la cantidad de arena necesaria para
revocarla.*/

int main(){
    float largo,alto,mtsCuadrados;

     cin>>largo;
     cin>>alto;

     mtsCuadrados=largo*alto;
     cout<<"Cantidad de arena necesaria: "<<mtsCuadrados*Arena;
return 0;}
