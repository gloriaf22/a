#include <iostream>
using namespace std;
int porcentaje(int,int);
void mostrar(int);

int main(){
    int a,b;
    cout<<"Ingrese a y b"<<endl;
    cin>>a>>b;

    mostrar(porcentaje(a,b));
return 0;}

void mostrar(int fun){
    cout<<endl<<fun<<"%";
}
int porcentaje (int a ,int b){

return (a*100)/b;}
