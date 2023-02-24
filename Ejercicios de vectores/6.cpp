#include <iostream>
using namespace std;

void ingresarTiradas(int[],int[]);
void calcularValores(int[],int[],int[]);

int main(){
    int dado1[5],dado2[5], valores[12];

    ingresarTiradas(dado1,dado2);
    calcularValores(dado1,dado2,valores);

    for(int i=0;i<12;i++){
        cout<<i+1<<" salio "<<valores[i]<<" veces"<<endl;
    }
}

void ingresarTiradas(int d[],int d2[]){
    for(int i=0; i<5;i++){
        cout<<"Tirada "<<i+1<<endl;
        cout<<"Ingrese valor (DADO 1): ";
        cin>>d[i];
        cout<<"Ingrese valor (DADO 2): ";
        cin>>d2[i];

        cout<<endl<<endl;
    }
}

void calcularValores(int d[],int d2[],int val[]){

    for(int i=0;i<12;i++){
        val[i]=0;
    }
    for(int i=0;i<5;i++){
        val[(d[i]+d2[i])-1]++;
    }
}
