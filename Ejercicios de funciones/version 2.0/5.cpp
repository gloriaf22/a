#include <iostream>
using namespace std;

int factorial(int);

int main(){
    int n,m;
    cin>>n>>m;

    cout<<factorial(m)/(factorial(n)*factorial(m-n));
}
int factorial(int nro){
    int respuesta=1;
    for(int i=nro; i>1;i--){
        respuesta=respuesta *i;
    }
    return respuesta;
}
