//PRograma que suma los numeros pares del 1 al 20
//Autor: Lopezveloz Matinez Itzia
//Creado el 18 de Agosto del 2017
#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	int count=1;
		while(count<=20){
			if((count%2)==0){
				sum=sum+count;
			}
      			count++;
	}
	cout<<"suma "<<sum<<endl;
	return 0;
}
