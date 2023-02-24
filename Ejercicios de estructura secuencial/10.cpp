#include<iostream>
#include<math.h>
using namespace std;

//10.Dado la longitud de los dos catetos de un triángulo rectángulo y mostrar la longitud de la
//hipotenusa.

int main(){
    float catetoA,catetoB,hipotenusa;

    cin>>catetoA;
    cin>>catetoB;

    hipotenusa=sqrt(catetoA*catetoA+catetoB*catetoB);
    cout<<"hipotenusa: "<<hipotenusa;
return 0;
}
