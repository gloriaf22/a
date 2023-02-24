#include <iostream>
using namespace std;

int main(){
    int a,b, resto;

    cin>>a>>b;

    resto=a%b;

    if(resto==0){
        cout<<"El MCD es "<<b;
    }

    while(resto != 0){
        a=b;
        b=resto;

        resto=a%b;

        if(resto==0){
            cout<<"El MCD es "<<b;
            break;
        }
    }
}

