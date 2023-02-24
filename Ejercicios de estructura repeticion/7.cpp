#include<iostream>
using namespace std;
int main(){
    int cantAlumnos;
    int aprobados=0;
    int desaprobados=0;
    cout<<"Ingrese cantidad de alumnos"<<endl;
    cin>>cantAlumnos;

    for(int i=0;i<cantAlumnos;i++){
        string nombre;
        int nota;
        cout<<endl<<"Ingrese NOMBRE (alumno "<<i+1<<")"<<endl;
        cin>>nombre;
        cout<<endl<<"Ingrese NOTA (alumno "<<i+1<<")"<<endl;
        cin>>nota;
        if(nota>=6){
            cout<<endl<<nombre<<" esta aprobade"<<endl;
            aprobados++;
        }
        else
            desaprobados++;
    }
    cout<<endl<<endl<<aprobados*100/cantAlumnos<<"% de aprobados  "<<desaprobados<<" desaprobados";
return 0;}
