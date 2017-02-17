#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#define x 5
#define y 5

using namespace std;
void menu();
int main (){
    menu();
return 0;
}
void menu (){
    int op;

    cout<<"matriz"<<endl;
    cout << endl;
    cout<<"0.salir"<<endl;
    cout<<"1.mostrar matriz"<<endl;
    cout<<"2.llenas matriz automatica"<<endl;
    cin>>op;
    switch (op){
        case 0: system("EXIT");
        break;
        case 1:

            int matriz[3][3];
             int arreglo[3];
             int i,j;

             //Ingreso de los datos
             for (i=0;i<3;i++){
             for (j=0;j<3;j++){
             cout << "Ingrese el numero entero correspondiente a la posicion ["<<i<<"] ["<<j<<"]: ";
             cin >> matriz[i][j];
             }
             }

             //Muestra en pantalla la matriz ingresada
             cout << "\nLa matriz que usted ingreso es: \n\n";
             for (i=0;i<3;i++){
             for (j=0;j<3;j++){
             cout << matriz[i][j]<<" ";
             }
             cout << "\n";
             }


             break;
        case 2:
             int mat[x][y];
                for(int i=0;i<x;i++){

                    for(int j=0;j<y;j++){
                        if(i==j){
                            mat[i][j]=7;
                        }else{
                            mat[i][j]=7;
                        }
                    }
                }
                for(int i=0;i<x;i++){
                    for(int j=0;j<y;j++){
                        cout<<mat[i][j];
                    }
                    cout<<endl;
                }

    }menu();
}
