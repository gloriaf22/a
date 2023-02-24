#include <iostream>
using namespace std;
void ingresarNum(int[]);
int main(){
    int numeros[10];

    ingresarNum(numeros);

    for(int i=9;i>=0;i--){
        cout<<numeros[i]<<endl;
    }
return 0;}

void ingresarNum(int v[]){
    for(int i=0;i<10;i++){
        cin>>v[i];
    }
}
