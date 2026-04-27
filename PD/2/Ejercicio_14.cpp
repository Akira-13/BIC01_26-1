#include <iostream>
using namespace std;

int main(){
	int numero, aux, digito, contador, sum, prod;

	cout<<"Ingrese un numero: ";
	cin>>numero;

	aux=numero;
	contador=0;
	sum=0;
	prod=1;

	do{
	   digito=aux%10;
       aux/=10;
	   contador++;
       if(contador%2==1){
	   		sum+=digito;
	   }else{
	      	prod*=digito;
	   }
	}while(aux!=0);

	if(prod%sum==0){
	   cout<<"El producto de sus digitos en lugares pares es divisible por la suma de sus digitos en lugares impares."<<endl;
       cout<<"El producto es : "<<prod<<endl;
	   cout<<"La suma es : "<<sum<<endl;
       cout<<"El resultado es "<<prod/sum;
	}else{
 		cout<<"El producto de sus digitos en lugares pares no es divisible por la suma de sus digitos en lugares impares."<<endl;
       cout<<"El producto es : "<<prod<<endl;
	   cout<<"La suma es : "<<sum<<endl;
	}
	return 0;
}