#include<iostream>
using namespace std;

int main(){
    int contador=0;
    float mayoresQueCien=0;
    int menoresQueMenosDiez=0;
    for(int i=0;i<50;i++){
        float nro;
        cout<<"INGRESE NRO"<<endl;
        cin>>nro;
        if(nro>100){
            mayoresQueCien+=nro;
            contador++;
        }
        if(nro<-10)
            menoresQueMenosDiez+=nro;
    }
    cout<<endl<<"Promedio (mayores que 100): "<<mayoresQueCien/contador<<endl;
    cout<<"Suma (menores a -10): "<<menoresQueMenosDiez;

return 0;}
