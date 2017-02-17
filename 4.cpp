#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#define x 4
#define y 4

using namespace std;
void menu();
int main (){
    menu();
return 0;
}
void menu (){
    int op;
    float a[]={32.583,11.239,45.781,22.237};
    int mat[x][y];

    cout<<"array"<<endl;
    cout << endl;
    cout<<"0.salir"<<endl;
    cout<<"1.imprimir 32.583,11.239,45.781,22.237"<<endl;
    cout<<"2.codigo ascii vocales"<<endl;
    cout<<"3.codigo ascii numerico"<<endl;


    cin>>op;
    switch (op){
        case 0: system("EXIT");
        break;
        case 1:
            a[0]=32.583;
            a[1]=11.239;
            a[2]=45.781;
            a[3]=22.237;

            cout << a[0]<<" "<< a[1]<< " "<< a[2]<< " "<< a[3];
        break;
        case 2:

            int mat[x][y];
                for(int i=0;i<x;i++){

                    for(int j=0;j<y;j++){
                        if(i==j){
                            mat[i][j]=1;
                        }else{
                            mat[i][j]=0;
                        }
                    }
                }
                for(int i=0;i<x;i++){
                    for(int j=0;j<y;j++){
                        cout<<mat[i][j];
                    }
                    cout<<endl;
                }





            }


}
