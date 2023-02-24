#include<iostream>
using namespace std;

int factorial(int);
bool mul3(int,int&);
bool mul5(int,int&);
void mostrar(int);

int main(){
    int num;
    int aMul3=0;
    int aMul5=0;
    cout<<"INGRESE NUMEROS (0 para finalizar)"<<endl;
    cin>>num;

    while(num!=0){
        cout<<"factorial: ";
        mostrar(factorial(num));
        cout<<endl;
        mul3(num,aMul3);
        mul5(num,aMul5);
        cout<<"INGRESE NUMEROS (0 para finalizar)"<<endl;
        cin>>num;
    }
    cout<<endl;
    cout<<aMul3<<" multiplos de 3"<<endl;
    cout<<aMul5<<" multiplos de 5"<<endl;
    cout<<aMul3+aMul5<<" multiplos de 3 y 5";
return 0;}

int factorial(int num){
    int resultado=1;
    for(int i=num;i>1;i--){
        resultado*=i;
    }
    return resultado;
}
bool mul3(int numero,int &acum){
    if(numero%3==0){
        acum++;
        return true;
    }
    else
        return false;
}
bool mul5(int numero,int &acum){
    if(numero%5==0){
        acum++;
        return true;
    }
    else
        return false;
}
void mostrar(int fun){
    cout<<endl<<fun;
}
