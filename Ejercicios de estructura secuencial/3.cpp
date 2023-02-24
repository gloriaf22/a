#include<iostream>
using namespace std;

int main(){
int nro,rta;

cin>>nro;
rta=nro/1000;
nro=nro%1000;
rta+=nro/100;
nro=nro%100;
rta+=nro/10;
nro=nro%10;
rta+=nro;
cout<<rta<<endl;
return 0;
}
