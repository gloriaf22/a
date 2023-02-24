#include<iostream>
using namespace std;

int main(){
    int n;
    int contador=0;
    cout<<"Ingrese cantidad de numeros a mostrar"<<endl;
    cin>>n;

    while(contador<n){
        int nro;
        cout<<endl<<"Ingrese un numero"<<endl;
        cin>>nro;
        if(nro%2==0&&nro>0){
            cout<<endl<<"NUMERO PAR POSITIVO "<<nro<<endl;
            contador++;
        }
    }
return 0;}
