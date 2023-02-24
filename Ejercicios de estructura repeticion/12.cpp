#include<iostream>
using namespace std;
int main(){
    int nro;
    int resp=1;
    cout<<"FACTORIAL"<<endl;
    cin>>nro;
    for(int i=nro; i>=2;i--){ //no le pongo 1 para ahorrar una entrada al for innesecaria
        resp*=i;
    }
    cout<<endl<<resp;
return 0;}
