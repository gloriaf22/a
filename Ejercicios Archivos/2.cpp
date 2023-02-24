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

    int codigo;
    Inscripcion i;

    cout<<"Ingrese codigo de materia a buscar: ";
    cin>>codigo;

    FILE*s=fopen("DIAFINALES.dat","rb");
    FILE*w=fopen("MATFINALES.dat","wb");

    fread(&i,sizeof(Inscripcion),1,s);

    while(!feof(s)){
        if(i.codMat==codigo){
            fwrite(&i,sizeof(Inscripcion),1,w);
        }
        fread(&i,sizeof(Inscripcion),1,s);
    }
    fclose(w);
    fclose(s);

return 0;
}


