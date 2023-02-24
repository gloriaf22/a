#include<iostream>
using namespace std;

int main(){
    int sumatoria=0;
    for(int i=0;i<10;i++){
        int nro;
        cout<<"Ingrese numero"<<endl;
        cin>>nro;
        sumatoria+=nro;
    }
    cout<<endl<<"La sumatoria de los 10 nros anteriores es "<<sumatoria;
return 0;}
