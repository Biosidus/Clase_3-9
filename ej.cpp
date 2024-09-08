#include <iostream>
using namespace std;
#define MAX(x,y) x>y?x:y
#define MIN(x,y) x<y?x:y

int main()
{
    int a, b, c;
    int mayor, medio, menor;
    cout<<"Ingrese 3 numeros a comparar"<<endl;
    cin>>a>>b>>c;

    if (a>b && a>c){
        mayor=a;
        medio=max(b,c);
        menor=min(b,c);

    }else{
        if(b>a && b>c){
            mayor=b;
            medio=max(a,c);
            menor=min(a,c);
        }else{
            mayor=c;
            medio=max(a,b);
            menor=min(a,b);
        }
    }
    cout<<"El mayor es: "<<mayor<<endl;
    cout<<"El mediano es: "<<medio<<endl;
    cout<<"El menor es: "<<menor;


}