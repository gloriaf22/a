#include <iostream>
using namespace std;

void cargarAlumnos(int d[],float n[],unsigned t);
int alumnoMayorNota(float n[],unsigned t);
int alumnoMenorNota(float n[],unsigned t);

int main(){
    unsigned cant;
    cout<<"Ingrese cantidad de alumnos: ";
    cin>>cant;
    int dni[cant];
    float nota[cant];

    cargarAlumnos(dni,nota,cant);
    cout<<"Alumno con mayor nota: "<<dni[alumnoMayorNota(nota,cant)]<<endl;
    cout<<"Alumno con menor nota: "<<dni[alumnoMenorNota(nota,cant)];

}
void cargarAlumnos(int d[],float n[],unsigned t){
    for(unsigned i=0;i<t;i++){
        cout<<"Ingrese DNI del alumno: ";
        cin>>d[i];
        cout<<"Ingrese nota: ";
        cin>>n[i];
        cout<<endl;
    }
}
int alumnoMayorNota(float n[],unsigned t){
    int pos=0;
    for(unsigned i=0;i<t;i++){
        if(n[pos]<n[i]){
            pos=i;
        }
    }
    return pos;
}
int alumnoMenorNota(float n[],unsigned t){
    int pos=0;
    for(unsigned i=0;i<t;i++){
        if(n[pos]>n[i]){
            pos=i;
        }
    }
    return pos;
}
