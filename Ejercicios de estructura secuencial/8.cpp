#include<iostream>
using namespace std;

/*8. Calcular el �rea y el per�metro de un rect�ngulo, dado la base y la altura.*/
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
