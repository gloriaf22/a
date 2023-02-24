#include<iostream>
using namespace std;

struct Alumno{
    int dni;
    float nota;
};

void cargarAlu(Alumno v[],int t);
Alumno ingAlu();
int tieneMayorN(Alumno v[],int t);
int tieneMenorN(Alumno v[],int t);

int main(){
    int cant;
    cout<<"Ingrese cantidad de alumnos: ";
    cin>>cant;
    Alumno vec[cant];

    cargarAlu(vec,cant);
    cout<<"Mayor nota: "<<vec[tieneMayorN(vec,cant)].dni<<endl;
    cout<<"Menor nota: "<<vec[tieneMenorN(vec,cant)].dni;

}
void cargarAlu(Alumno v[],int t){
    for (int i=0;i<t;i++){
        v[i]=ingAlu();
    }
}
Alumno ingAlu(){
    Alumno a;
    cout<<"Ingrese dni: ";
    cin>>a.dni;
    cout<<endl<<"Ingrese nota: ";
    cin>>a.nota;
    return a;
}
int tieneMayorN(Alumno v[],int t){
    int pos=0;
    for(int i=0;i<t;i++){
        if(v[pos].nota<v[i].nota){
            pos=i;
        }
    }
    return pos;
}
int tieneMenorN(Alumno v[],int t){
    int pos=0;
    for(int i=0;i<t;i++){
        if(v[pos].nota>v[i].nota){
            pos=i;
        }
    }
    return pos;
}
