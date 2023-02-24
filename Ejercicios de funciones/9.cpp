#include <iostream>
using namespace std;

void fecha(int,int&,int&,int&);

int main(){
    int aaaammdd,dia,mes,anio;
    cout<<"Ingrese aaaammdd"<<endl;
    cin>>aaaammdd;
    fecha(aaaammdd,dia,mes,anio);

    cout<<"dia "<<dia<<endl;
    cout<<"mes "<<mes<<endl;
    cout<<"anio "<<anio<<endl;
return 0;}

void fecha(int aaaammdd,int &d,int &m,int &a){
    a=aaaammdd/10000;
    m=(aaaammdd%10000)/100;
    d=(aaaammdd%10000)%100;
}
