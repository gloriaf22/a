#include<iostream>
using namespace std;

void ingresarNum(int[]);
void invertir(int []);

int main(){
    int numeros[4];
    cout<<"Ingrese 4 nros"<<endl;
    ingresarNum(numeros);
    invertir(numeros);

return 0;}

void ingresarNum(int v[]){
    for(int i=0; i<4;i++){
        cin>>v[i];
    }
}

void invertir(int v[]){
    for(int i=3;i>=0;i--){
        cout<<v[i];
    }
}
