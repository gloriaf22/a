#include<iostream>
using namespace std;

int funcion(int,int);
void mostrar(int);
int main(){

    mostrar(funcion(2,3));
return 0;}

int funcion(int a,int b){
    int r=1;
    int aux=0;

    while(r!=0){
        r=a%b;

        if(r==0){
            aux= b;
        }
        else{
            a=b;
            b=r;
        }
    }

    return aux;
}
void mostrar(int num){
    cout<<endl<<num;
}
