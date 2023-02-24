#include<iostream>
using namespace std;
int main(){


    for(int i=0;i<25;i++){
        string nombre;
        float nota;
        float promedio=0;
        int cant=0;

        cout<<"Ingrese nombre "<<i+1<<endl;
        cin>>nombre;
        cout<<"Ingrese nota"<<endl;
        cin>>nota;

        while(nota!=0){
            promedio+=nota;
            cant++;
            cout<<"Ingrese nota"<<endl;
            cin>>nota;
        }
        cout<<endl<<nombre<<"  Promedio: "<<promedio/cant<<endl;
    }



return 0;}
