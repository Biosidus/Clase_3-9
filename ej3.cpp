#include <iostream>
using namespace std;

int main(){
    int a;
    
    cout<<"Ingrese un numero para saber si un numero es par o impar:"<<endl;
    cin>>a;

    if( a%2 == 0 ){
        cout<<"el numero es par."; 

    }else{
        cout<<"el numero es impar.";
    }

}