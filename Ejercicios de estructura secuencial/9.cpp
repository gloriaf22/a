#include<iostream>
using namespace std;

/*9. Determinar el porcentaje de alumnos aprobados, desaprobados y ausentes que hubo en un
examen, conociendo las cantidades de cada uno.*/

int main(){
    float aprobados,desaprobados,ausentes,total;

    cin>>aprobados;
    cin>>desaprobados;
    cin>>ausentes;

    total=aprobados+desaprobados+ausentes;
    cout<<"Aprobados: "<<(aprobados*100)/total<<"%"<<endl;
    cout<<"Desaprobados: "<<(desaprobados*100)/total<<"%"<<endl;
    cout<<"Ausentes: "<<(ausentes*100)/total<<"%"<<endl;
return 0;
}
