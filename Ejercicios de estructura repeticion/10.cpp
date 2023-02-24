#include<iostream>
using namespace std;
int main(){
    int equipos;
    cout<<"Ingrese cantidad de equipos"<<endl;
    cin>>equipos;

    for(int i=0;i<equipos;i++){
        string nombre;
        int puntaje=0;
        cout<<"Ingrese nombre de team: ";
        cin>>nombre;
        cout<<"ingrese codigo de resultado";
        for(int j=1;j<equipo;j++){
            cout<<endl<<"PARTIDO "<<j<<endl;
            char op;
            cin>>op;
            switch(op){
        case 'E':
        case 'e':
            puntaje+=1;
            break;
        case 'G':
        case 'g':
            puntaje+=3;
            break;
            }
        }
        cout<<endl<<endl<<"Nombre: "<<nombre<<"  Puntaje: "<<puntaje<<endl<<endl;
    }
return 0;}
