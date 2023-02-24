#include <iostream>
using namespace std;
int main(){
    int cantidad=0;
    int suma=0;
    int nro;
    cout<<"Ingrese numeros, 0 para terminar"<<endl;
    cin>>nro;
    while(nro!=0){
        suma+=nro;
        cantidad++;
        cin>>nro;
    }
    cout<<endl<<suma/cantidad;
return 0;}
