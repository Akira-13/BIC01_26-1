#include <iostream>
using namespace std;

int main(){
	int numero, aux, sum=0, digito;

	cout<<"Ingrese el numero: ";
	cin>>numero;

	aux=numero;

	do{
	digito=aux%10;
	aux/=10;
	sum+=digito;
	}while(aux!=0);

	cout<<endl;

	if(numero%sum==0){
		cout<<numero<<" es divisible por la suma de sus digitos la cual es "<<sum;
	}else{
		cout<<numero<<" no es divisible por la suma de sus digitos la cual es "<<sum;
	}

	return 0;
}