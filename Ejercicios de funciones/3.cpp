#include<iostream>
using namespace std;

bool multiplos(int,int);
void mostrar(bool);

int main(){
    mostrar(multiplos(27,3));
return 0;}

bool multiplos(int a, int b){

    if(a%b==0){
        return true;
    }
    else{
        return false;
    }
}
void mostrar(bool fun){
    if(fun)
        cout<<"verdadero";
    else
        cout<<"falso";
}
