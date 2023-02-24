#include<iostream>
using namespace std;

int factorial(int);
void mostrar(int);

int main(){
    mostrar(factorial(5));
return 0;}

int factorial(int num){
    int resultado=1;
    for(int i=num;i>1;i--){
        resultado*=i;
    }
    return resultado;
}
void mostrar(int fun){
    cout<<endl<<fun;
}
