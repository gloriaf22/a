#include<iostream>
using namespace std;

int main(){
    int cant;

    cout<<"Ingrese la cantidad de alumnos"<<endl;
    cin>>cant;

    for(int i=0;i<cant;i++){
        string nombre;
        float nota1,nota2;
        cout<<"Ingrese nombre (alumno "<<i+1<<")"<<endl;
        cin>>nombre;
        cout<<"Ingrese NOTA 1"<<endl;
        cin>>nota1;
        cout<<"Ingrese NOTA 2"<<endl;
        cin>>nota2;

        cout<<"NOMBRE: "<<nombre<<"  "<<"PROMEDIO: "<<(nota1+nota2)/2<<endl<<endl;
    }
return 0;}
