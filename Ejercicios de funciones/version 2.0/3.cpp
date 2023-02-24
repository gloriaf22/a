#include <iostream>
using namespace std;

bool multiplo (int, int);

int main(){
    int a,b;
    cin>>a>>b;
    if(multiplo(a,b)){
        cout<<"VERDADERO";
    }
    else{
        cout<<"FALSO";
    }

}

bool multiplo (int a, int b){
    if(a%b==0){
        return true;
    }
    else{
        return false;
    }
}
