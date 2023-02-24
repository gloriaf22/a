#include<iostream>
using namespace std;

void ingresarNum(int [],int);
void numConj(int []);

int main(){
    int conjunto[5];

    int num;
    cout<<"Ingrese num"<<endl;
    cin>>num;
    while(num!=0){
        ingresarNum(conjunto,num);
        cout<<"Ingrese num"<<endl;
        cin>>num;
    }
    numConj(conjunto);
return 0;}

void ingresarNum(int v[],int n){
    v[n-1]=1;
}
void numConj(int v[]){
    for(int i=0;i<5;i++){
        if(v[i]==1){
            cout<<v[i+1];
        }
    }
}
