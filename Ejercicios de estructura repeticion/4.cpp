#include<iostream>
using namespace std;

int main(){
    int contador=0;

    for(int i=0;i<20;i++){
        int nro;
        cout<<"Ingrese nro"<<endl;
        cin>>nro;

        if(nro<0)
            contador++;
    }
    cout<<endl<<contador<<" numeros negativos";
return 0;}
