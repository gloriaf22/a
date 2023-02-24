#include <iostream>
using namespace std;

int factorial(int);


int main(){
    int ab;
    cin>>ab;
    cout<<factorial(ab);
    return 0;
}

int factorial(int nro){
    int respuesta=1;
    for(int i=nro; i>1;i--){
        respuesta=respuesta *i;
    }
    return respuesta;
}

