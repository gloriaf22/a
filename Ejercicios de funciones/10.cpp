#include <iostream>
using namespace std;

void sumaTiempos(int,int,int&,int&,int&,bool&);
int main(){
    int horas,minutos,segundos,hora,tiempo;
    bool dia;

    cout<<"Ingrese hora HHMMSS y tiempo HHMMSS"<<endl;
    cin>>hora>>tiempo;
    sumaTiempos(hora,tiempo,horas,minutos,segundos,dia);

    if(dia){
        int dias=horas/24;
        horas=horas%24;
        cout<<endl<<dias<<" dias "<<horas<<" "<<minutos<<" "<<segundos;
    }
    else
        cout<<endl<<horas<<" "<<minutos<<" "<<segundos;
}

void sumaTiempos(int hora,int tiempo,int &nuevaH,int &nuevaM,int &nuevaS,bool &dia){
    int h=hora/10000;
    int m=(hora%10000)/100;
    int s=hora%100;
    int h2=tiempo/10000;
    int m2=(tiempo%10000)/100;
    int s2=tiempo%100;

    nuevaS=s+s2;
    nuevaM=m+m2;
    nuevaH=h+h2;
    if(nuevaS>59){
        nuevaM+=nuevaS/60;
        nuevaS=nuevaS%60;
    }
    if(nuevaM>59){
        nuevaH+=nuevaM/60;
        nuevaM=nuevaM%60;
    }
    if(nuevaH>23){
        dia=true;
    }
}
