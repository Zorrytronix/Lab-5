#include <iostream>

using namespace std;

int prueba (int numero1, int numero2){
    int mod, resultado;
    mod=numero2%numero1;
    do{
        numero2=numero1;
        numero1=mod;
    }while (numero1!=0);
  
    resultado=numero2;
    
    cout<<resultado<<endl;
}

int main()
{
    int numero2, numero1;
    cout <<"por favor inserte dos numeros para calcular su MCD"<<endl<<endl;

    cout <<"Por favor ingrese el numero mayor: "<<endl;
    cin>>numero2;
    cout <<endl;

    cout <<"Por favor Ingrese el numero menor: "<<endl;
    cin>>numero1;
    cout <<endl;

    while (numero2<numero1 & numero2<=0 & numero1<=0)
    {
        cout<<"Por favor ingrese otro numero mayor: "<<endl;
    cin>>numero2;
    cout <<endl;

    cout<<"vuelva ingresar el numero menor por favor"<<endl;
    cin>>numero1;
    cout <<endl;
    }

    prueba(numero2, numero1);
    return 0;
}