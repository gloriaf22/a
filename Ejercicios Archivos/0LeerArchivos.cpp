#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

struct Inscripcion{
    char nomYap [35];
    int nroLeg;
    int codMat;
    int diaMesAnio [3];
};

int main(){
    char archi [50];
    Inscripcion i;

    cin.getline(archi,50);

    FILE*q=fopen(archi,"rb");

    fread(&i,sizeof(Inscripcion),1,q);
    //NOTA: FEOF NO FUNCA SIN ANTES HABER LEIDO (fread) AHI ESTA LO QUE NO
    //TE CUADRA DEL PRINCIPIO {SI QUIERES BUSCA MAS DOCUMENTACION}
    //ESTE ES EL CHABON QUE LO DICE https://www.youtube.com/watch?v=cqXBODTmZyo
    while(feof(q)==false){
        cout<<i.nroLeg<<" "<<i.codMat<<" "<<i.diaMesAnio[0]<<"/"<<i.diaMesAnio[1]<<"/"<<i.diaMesAnio[2]<<" "<<i.nomYap<<endl;
        fread(&i,sizeof(Inscripcion),1,q);

    }

    return 0;
}
