#include<iostream>
using namespace std;
int main(){
    int sueldo;
    int c1=0;
    int c2=0;
    int c3=0;
    int c4=0;

    cout<<"Ingrese sueldo de empleado, 0 para finalizar"<<endl;
    cin>>sueldo;
    while(sueldo!=0){
        if(sueldo>=2000)
            c4++;
        else{
            if(sueldo>=1200&&sueldo<2000)
                c3++;
            if(sueldo>=900&&sueldo<1200)
                c2++;
            if(sueldo<900)
                c1++;
        }
        cin>>sueldo;
    }
    cout<<endl<<c1<<" ganan menos de 900";
    cout<<endl<<c2<<" ganan 900 o mas pero menos de 1200";
    cout<<endl<<c3<<" ganan 1200 o mas pero menos de 2000";
    cout<<endl<<c4<<" ganan mas de 2000";
return 0;}
