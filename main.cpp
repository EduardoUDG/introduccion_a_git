#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
    char nombre[30];

    cout<<"Hola mundo"<<endl;
    cout<<"Nombre: ";
    cin.getline(nombre,30,'\n');
    cout<<"\nNombre: "<<nombre<<endl;

    system("pause");
    return 0;
}