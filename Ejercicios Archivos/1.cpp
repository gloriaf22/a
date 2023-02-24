#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct Inscripcion{
    char nomYap [35];
    int nroLeg;
    int codMat;
    int diaMesAnio [3];
};

Inscripcion ingIns(int nro);

int main(){
    int leg;
    FILE*a= fopen("DIAFINALES.dat","wb");
    cout<<"INGRESE NUMERO DE LEGAJO"<<endl;
    cin>>leg;
    while(leg!=0){
        Inscripcion aux;
        aux=ingIns(leg);

        fwrite(&aux,sizeof(Inscripcion),1,a);

        cout<<"INGRESE NUMERO DE LEGAJO"<<endl;
        cin>>leg;
    }
    fclose(a);

    return 0;
}

Inscripcion ingIns(int nro){
    Inscripcion i;

    //cout<<"Ingrese numero de Legajo"<<endl;
    i.nroLeg=nro;
    cout<<"Ingrese nombre y apellido"<<endl;
    cin.ignore();
    cin.getline(i.nomYap,35);
    cout<<"Ingrese codigo de materia"<<endl;
    cin>>i.codMat;
    for(int j =0; j<3;j++){
        //int aux;
        switch(j){
        case 0:
            cout<<"Ingrese dia del examen"<<endl;
            cin>>i.diaMesAnio[j];
            break;
        case 1:
            cout<<"Ingrese mes del examen"<<endl;
            cin>>i.diaMesAnio[j];
            break;
        case 2:
            cout<<"Ingrese anio del examen"<<endl;
            cin>>i.diaMesAnio[j];
            break;
        }
    }

    return i;
}
