#include <iostream>
using namespace std;

int main(){
    int anio, anioIngresado;
    cout<<"Ingrese un anio para saber si es bisiesto:"<<endl;
    cin>>anioIngresado;

    if(anioIngresado%4==0){
        cout<<anioIngresado<<"Es bisiesto"<<endl;

    }else{
        cout<<anioIngresado<<" No es bisiesto";
    }

}