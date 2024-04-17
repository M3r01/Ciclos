#include <iostream>
#include <string.h>

using namespace std;

int main () {

int numeroLimitador;
int contador ;

cout<< "Ingrese un numero, luego se mostraran todos los numeros pares hasta el numero ingresado:"<<endl;
cin>>numeroLimitador;

cout<< "Numero pares hasta"<< numeroLimitador<<":"<<endl;

contador=0;


for (contador=0; contador<=numeroLimitador; contador+=2)
    {

    cout<<contador<<" ";

    contador +=2;
}


return 0;
}
