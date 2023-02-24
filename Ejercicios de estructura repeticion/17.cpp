#include<iostream>
using namespace std;
int main(){
    int equilateros=0;
    int isoceles=0;
    int escalenos=0;
    int l1,l2,l3;
    cout<<"Ingrese 3 lados de triangulo"<<endl;
    cin>>l1>>l2>>l3;
    while(true){
        if(l1!=0&&l2!=0&&l3!=0){
          if(l1==l2&&l2==l3){
            equilateros++;
        }
        else{
            if(l1==l2||l2==l3||l3==l1)
                isoceles++;
            if(l1!=l2&&l2!=l3)
                escalenos++;
        }
        cout<<"Ingrese 3 lados de triangulo"<<endl;
        cin>>l1>>l2>>l3;
        }
        else
            break;
    }
    cout<<"Equilateros: "<<equilateros<<" Isoceles: "<<isoceles<<" Escalenos: "<<escalenos;

return 0;}
