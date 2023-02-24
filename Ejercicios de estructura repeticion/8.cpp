#include<iostream>
using namespace std;

int main(){
    int numero;
    string romano="";
    cout<<"Ingrese numero entre 1 y 3999"<<endl;
    cin>>numero;

    int m=numero/1000;      //miles
    int c=(numero/100)%10;  //centenas
    int d=(numero/10)%10;   //decenas
    int u=numero%10;        //unidades

    for(int i=0; i<m;i++){
        romano+="M";
    }
    if(c==9)
        romano+="CM";
    else{
        if(c>=5){
            romano+="D";
            for(int i=0;i<c-5;i++)
                romano+="C";
        }
        else{
            for(int i=0;i<c;i++)
                romano+="C";
        }
    }
    if(d==9)
        romano+="XC";
    else{
        if(d>=5){
            romano+="L";
            for(int i=0;i<d-5;i++)
                romano+="X";
        }
        else{
            for(int i=0;i<d;i++)
                romano+="X";
        }
    }
    if(u==9)
        romano+="IX";
    else{
        if(u>=5){
            romano+="V";
            for(int i=0;i<u-5;i++)
                romano+="I";
        }
        else{
            for(int i=0;i<u;i++)
                romano+="I";
        }
    }

    cout<<endl<<endl<<romano;
return 0;}
