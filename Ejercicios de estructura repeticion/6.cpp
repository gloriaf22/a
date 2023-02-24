#include<iostream>
using namespace std;

int main(){
    int n;
    float promedio=0;
    cout<<"Ingrese un numero entero"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        float numero;
        cout<<"Ingrese numero "<<i+1<<endl;
        cin>>numero;
        promedio+=numero;
    }
    cout<<endl<<"PROMEDIO: "<<promedio/n<<endl;
return 0;}
