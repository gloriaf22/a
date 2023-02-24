#include<iostream>
using namespace std;

void mostrar(unsigned);
unsigned edadAGrupoEtario(unsigned);

int main(){
    unsigned num;
    cout<<"Ingrese edad"<<endl;
    cin>>num;
    mostrar(edadAGrupoEtario(num));
return 0;}

void mostrar(unsigned fun){
    cout<<endl<<fun;
}
unsigned edadAGrupoEtario(unsigned edad){
    unsigned valor;
    if(edad<=14){
        valor=1;
    }
    else{
        if(edad>=15 && edad<=21){
            valor=2;
        }
        if(edad>=22 && edad<=28){
            valor=3;
        }
        if(edad>=29 && edad<=35){
            valor=4;
        }
        if(edad>=36 && edad<=42){
            valor=5;
        }
        if(edad>=43 && edad<=49){
            valor=6;
        }
        if(edad>=50 && edad<=63){
            valor=7;
        }
        if(edad>64){ //mayor o igual pero lo dejo asi pq esta explicito en la consigna jiji
            valor=8;
        }
    }
    return valor;
}
