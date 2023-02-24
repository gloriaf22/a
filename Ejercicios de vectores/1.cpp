#include<iostream>
using namespace std;
void ingresarNum(int[]);
void mostrarMax(int[]);

int main(){
    int notas[3];
    ingresarNum(notas);
    mostrarMax(notas);
return 0;}

void ingresarNum(int v[]){
    for(int i=0; i<3;i++){
        cin>>v[i];
    }
}
void mostrarMax(int v[]){ //Ya se que deberia ser tipo INT
    int aux=0;
    for(int i=0;i<3;i++){
        if(v[i]>aux)
            aux=v[i];
    }
    cout<<aux;
}
