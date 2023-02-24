#include <iostream>
using namespace std;

int factorial(int);
int combinatorio(int,int);
void mostrar(int);

int main(){
    int n,m;
    cout<<"Ingrese m y n"<<endl;
    cin>>m>>n;
    mostrar(combinatorio(n,m));
return 0;}

void mostrar(int fun){
    cout<<endl<<fun;
}
int factorial(int num){
    int resultado=1;
    for(int i=num;i>1;i--){
        resultado*=i;
    }
    return resultado;
}
int combinatorio(int n, int m){
return (factorial(m)/(factorial(n)*factorial(m-n)));
}
