#include<iostream>
using namespace std;

bool fechaCorrecta(int,int,int);

int main(){
    int dia,mes,anio;
    cout<<"Ingrese dia, mes y anio"<<endl;
    cin>>dia>>mes>>anio;
    cout<<endl;

    if(fechaCorrecta(dia,mes,anio)){
        cout<<anio<<mes<<dia;
    }
    else{
        cout<<"fecha invalida";
    }

return 0;}

bool fechaCorrecta(int d, int m, int a){

    if(a%4!=0&&m==2){
        if(d>28){
            return false;
        }
        else{
            if(d<=28){
                return true;
            }
        }
    }
    if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&d>31){
            return false;
    }
    else{
        if((m==4||m==6||m==9||m==11)&&d>30)
            return false;
    }
    return true;
}
