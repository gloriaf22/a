#include <iostream>
using namespace std;
int main(){
    int edad;
    cin>>edad;
    int dieciocho=0;
    int diecinueve=0;
    int veinte=0;
    int veintiuno=0;
    int veintidos=0;

    while(edad!=0){
//        while(edad<18||edad>22)
//        {
//            cout<<"Regingrese edad"<<endl;
//            cin>>edad;
//        }
        switch(edad)
        {
        case 18:
            dieciocho++;
            break;
        case 19:
            diecinueve++;
            break;
        case 20:
            veinte++;
            break;
        case 21:
            veintiuno++;
            break;
        case 22:
            veintidos++;
            break;
        }
        cin>>edad;
    }
    cout<<"18: "<<dieciocho<<endl<<"19: "<<diecinueve<<endl<<"20: "<<veinte<<endl<<"21: "<<veintiuno<<endl<<"22: "<<veintidos<<endl;
return 0;}
