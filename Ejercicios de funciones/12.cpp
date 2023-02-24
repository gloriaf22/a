#include<iostream>
using namespace std;

unsigned edadAGrupoEtario(unsigned);

int main(){
    int diaNac,mes,anio;
    char sexo;

    int uno=0;int dos=0;int tres=0;int cuatro=0;int cinco=0;int seis=0;int siete=0;int ocho=0;
    int naciEnOct=0;
    int naciAntesDe=0;
    int naciEnPri=0;
    char sexViej='';

    while(diaNac!=0){
        cout<<"Ingrese Dia de Nacimiento, Mes y Anio"<<endl;
        cin>>diaNac>>mes>>anio;
        cout<<endl<<"Ingrese sexo (M/F)"<<endl;
        cin>>sexo;
        cout<<endl;

        if(edadAGrupoEtario())
    }
return 0;}

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
