#include<iostream>
using namespace std;

int main(){
    int nota;
    int rta=0;
    int i=0;
    while(i<4){
        cin>>nota;
        rta+=nota;
        i++;
    }
    rta=rta/4;
    cout<<"promedio: "<<rta;
return 0;}
