//Leer Diagrama de flujo
//Lopezveloz Martinez Itzia
//22 de Agosto de 2017
#include <stdio.h>
int main()
{
    int S=12;
    int p;
    int numero;
    cout << "Introduce un número: "<< endl;
    cin >> p;
    while(1){
        if(p%2==0){
            p=p+1;
        } else if (!prime(p);){
            p=p+2;
        }else if (p<S){
            S=S-p;
        }else{
        S=S-1;
        if(S==0){
            break;
        }
        else{
            p=p+2
        }
        }
        output(p);
        stop();
        return0;
    }
