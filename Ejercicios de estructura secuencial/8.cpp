#include<iostream>
using namespace std;

/*8. Calcular el área y el perímetro de un rectángulo, dado la base y la altura.*/
int main(){
    float base,altura,rta;

    cin>>base;
    cin>>altura;

    rta=base*altura/2;
    cout<<"area: "<<rta<<endl;

    rta=base*3;
    cout<<"perimetro (equilatero): "<<rta;
return 0;
}
