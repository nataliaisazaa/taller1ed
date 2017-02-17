#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#define L 5
using namespace std;
void menu();
int main (){
    menu();
return 0;
}
void menu (){
    int op;
    float f;
    float n;
    int r;
    int x;
    int z;
    cout<<"Ciclo for"<<endl;
    cout << endl;
    cout<<"0.salir"<<endl;
    cout<<"1. numeros del 1 al 100"<<endl;
    cout<<"2. tabla de multiplicar"<<endl;
    cout<<"3. factorial de un numero"<<endl;
    cout<<"4. numero de Fibonacci"<<endl;
    cout<<"5. matriz"<<endl;
    cin>>op;
    switch (op){
        case 0: system("EXIT");
        break;
        case 1:int i;
                i = 0;
                for (i=1;i<=100;i++) {
                    cout << i << endl;
                }
        break;
        case 2:
            int n;
            int t;
            for (n=1;n<=20;n++) {
                for (i=1;i<=10;i++) {
                    t = n*i;
                    cout << n << "*" << i << "=" << t << endl;
                }
                cout << endl;
            }
        break;
        case 3:

            cout << "por favor ingrese un numero" << endl;
            cin >> n;
            f = 1;
            if (n>=0) {
                for (i=1;i<=n;i++) {
                    f = f*i;
                }
                cout << "El factorial es" << f << endl;
            } else {
                cout << "No es factorial" << endl;
            }
         break;
        case 4:
                x = 0;
                z = 1;
                cout << "Ingrese un numero" << endl;
                cin >> n;
                for (i=0;i<=n;i++) {
                    r = x+z;
                    z = x;
                    x = r;
                    cout << r << endl;
                }
        break;
        case 5:

            for(int i=0;i<L;i++){

                int arreglo[i];
                cout<<"Ingrese un numero para la posicion"<<i<<endl;
                cin>>arreglo[i];
            }
                for(int i=0;i<L;i++){
                int arreglo[i];
                cout<<"los valores ingresado en la posicion" << i << "es" << arreglo[i] <<endl;
                }
        break;
        default: cout<<"No es una opción valida"<<endl;
        menu();

}
menu();
}


