#include<iostream>
using namespace std;

void ingresarNum(int v[],int &);
void edadesSupProm(int v[],int,int&);

int main(){
    int total=0;
    int acu=0;
    int edades[4];

    ingresarNum(edades,total);
    edadesSupProm(edades,total,acu);
return 0;}

void ingresarNum(int v[],int &t){
    for(int i=0; i<4;i++){
        cin>>v[i];
        t+=v[i];
    }
}
void edadesSupProm(int v[],int t,int &acu){
    for(int i=0;i<4;i++){
        if(v[i]>t/4){
            cout<<v[i]<<" ";
        }
    }
}
