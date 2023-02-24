#include<iostream>
using namespace std;
int main(){
    int nro;
    cout<<"Ingrese nro"<<endl;
    cin>>nro;
    while(nro!=0){
        int factorial=1;
        for(int i=nro;i>=2;i--){
            factorial*=i;
        }
        cout<<endl<<"FACTORIAL "<<factorial<<endl<<endl;
        cout<<"Ingrese nro"<<endl;
        cin>>nro;
    }
return 0;}
