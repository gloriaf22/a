#include <iostream>
using namespace std;

int porcentaje(int,int);

int main(){
    int a,b;
    cin>>a>>b;
    cout<<porcentaje(a,b)<<"%";
}

int porcentaje(int a, int b){
    return (a*100)/b;
}
