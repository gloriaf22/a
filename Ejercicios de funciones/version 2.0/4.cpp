#include <iostream>
using namespace std;

int factorial(int);
bool multiplo(int, int);

int main(){
    int nro, m3, m5, m35;
    m3=0;
    m5=0;
    m35=0;
    cin>>nro;
    while(nro!=0){
        cout<<factorial(nro);
        if(multiplo(nro,3)){
            m3++;
        }
        else if(multiplo(nro,5)){
            m5++;
        }
        else if (multiplo(nro,3)&&multiplo(nro,5)){
            m35++;
        }
        cin>>nro;
    }
    cout<<m3<<endl<<m5<<endl<<m35;
}
int factorial(int nro){
    int respuesta=1;
    for(int i=nro; i>1;i--){
        respuesta=respuesta *i;
    }
    return respuesta;
}

bool multiplo (int a, int b){
    if(a%b==0){
        return true;
    }
    else{
        return false;
    }
}
