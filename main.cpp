#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
    char nombre[20];
    int edad;

    cout<<"Hola mundo"<<endl;
    cout<<"Nombre: ";
    cin.getline(nombre,30,'\n');
    cout<<"\nNombre: "<<nombre<<endl;

    cout<<"\nDigite tu edad: ";
    cin>>edad;
    cout<<"Edad: "<<edad<<endl;

    system("pause");
    return 0;
}