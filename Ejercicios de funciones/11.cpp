#include<iostream>
using namespace std;

int porcentaje(int,int);
int mcd(int,int);
int factorial(int);
int combinatorio(int,int);

int main(){
    int a,b,op;

    op=6;
    while(op==6){
        cout<<"Ingrese dos numeros enteros"<<endl;
        cin>>a>>b;
        cout<<"INGRESE UNA OPCION"<<endl;
        cout<<"1. Sumar ambos numeros"<<endl;
        cout<<"2. Restarle el menor al mayor"<<endl;
        cout<<"3. Porcentaje que representa el menor sobre el mayor"<<endl;
        cout<<"4. Maximo comun divisor de ambos numeros"<<endl;
        cout<<"5. Combinatorio del mayor sobre el menor"<<endl;
        cout<<"6. Cambiar los numeros"<<endl;

        cin>>op;
        cout<<endl;

        switch(op){
        case 1:
            cout<<a+b;
            break;
        case 2:
            if(a>b){
                cout<<a-b;
            }
            else
                cout<<b-a;
            break;
        case 3:
            if(a>b){
                cout<<porcentaje(b,a);
            }
            else
                cout<<porcentaje(a,b);
            break;
        case 4:
            cout<<mcd(a,b);
            break;
        case 5:
            if(a>b)
                cout<<combinatorio(b,a);
            else
                cout<<combinatorio(a,b);
            break;
        case 6:
            break;
        default:
            cout<<"ERROR";
        }
    }

    cout<<endl;
return 0;}

int porcentaje (int a ,int b){

return (a*100)/b;}

int mcd(int a,int b){
    int r=1;
    int aux=0;
    while(r!=0){
        r=a%b;
        if(r==0){
            aux= b;
        }
        else{
            a=b;
            b=r;
        }
    }
    return aux;
}
int factorial(int num){
    int resultado=1;
    for(int i=num;i>1;i--){
        resultado*=i;
    }
    return resultado;
}
int combinatorio(int n, int m){
return (factorial(m)/(factorial(n)*factorial(m-n)));
}


