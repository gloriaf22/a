#include<iostream>
#define PI 3.1416
using namespace std;

int main(){
    float radio, rta;

    cin>>radio;

    rta=2*radio;
    cout<<"diametro: "<<rta<<endl;

    rta=PI*2*radio;
    cout<<"perimetro: "<<rta<<endl;

    rta=PI*radio*radio;
    cout<<"superficie: "<<rta;
return 0;
}
