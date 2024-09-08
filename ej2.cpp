#include <iostream>
using namespace std;

int main()
{
    int a,b,opc;
    double resultado;

    cout<<"Ingrese 2 numeros a calcular:";
    cin>>a>>b;

    cout<<"Ingrese la operacion a realizar:"<<endl;
    cout<<"1.SUMA"<<endl;
    cout<<"2.RESTA"<<endl;
    cout<<"3.MULTIPLICACION"<<endl;
    cout<<"4.DIVISON"<<endl;
    cin>>opc;
    switch (opc)
    {
    case 1:
        resultado=a+b;
        break;
    case 2:
        resultado=a-b;
        break;
    case 3:
        resultado=a*b;
        break;
    case 4:
        resultado=a/b;
        break;
    default:
        cout<<"No ingreso una opcion valida.";
        break;
    }
    cout<<"El resultado de la operacion es: "<<resultado;

}