#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
void menu();
int main (){
    menu();
return 0;
}
void menu (){
    int op;
    int acum =0;
    int cont =1;
    int a;
    int c;
    a = 0;
    c = 1;
    cout<<"Ciclo while"<<endl;
    cout << endl;
    cout<<"0.salir"<<endl;
    cout<<"1. numeros del 1 al 10"<<endl;
    cout<<"2. suma los numeros del 1 al 10"<<endl;
    cout<<"3. suma los numero pared del 1 al 50"<<endl;
    cout<<"4. suma los numeros inpares del 1 al 50"<<endl;
    cin>>op;

    switch (op){
        case 0: system("EXIT");
        break;
        case 1:
        op=0;
            while(op<=9){
                op=op+1;
                cout<<op<<endl;
            }
        break;
        case 2:

            while(cont<100){
                    acum=acum+cont;
                    cont=cont+1;
                    cout<<acum<<" + "<<cont<<" = "<<acum+cont<<endl;
        }
        break;
        case 3:
            while(cont<50){
                acum=acum+cont;
                cont=cont+2;
                cout<<acum<<" + "<<cont<<" = "<<acum+cont<<endl;
            }
        break;
        case 4:
            while (c<=50) {
                if (c%2!=0) {
                    a = a+c;
                    c = c+2;
                    cout << a << "+" << c << "=" << a+c << endl;
                }
            }
        break;
        default: cout<<"No es una opción valida"<<endl;
        menu();

}
menu();
}
