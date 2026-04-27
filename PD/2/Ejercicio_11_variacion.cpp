#include <iostream>
using namespace std;

int main(){
	int x1,x2,d1,d2,x1actual,x2actual, contador;

	cout<<"Ingrese la posicion de x1: ";
	cin>>x1;
	cout<<"Ingrese la distancia que puede saltar x1: ";
	cin>>d1;

	cout<<"Ingrese la posicion de x2: ";
	cin>>x2;
	cout<<"Ingrese la distancia que puede saltar x2: ";
	cin>>d2;

	x1actual=x1;
	x2actual=x2;
	contador=0;

	do{
	   x1actual+=d1;
       x2actual+=d2;
       contador++;
       if(contador==7){
       	break;
	   }
	}while(x1actual!=x2actual);

	if(x1actual==x2actual){
		cout<<"\nLas personas se encontraron en el punto "<<x1actual<<" despues de "<<contador<<" saltos."<<endl;
	}else{
 		cout<<"\nLas personas no se encontraron luego de 7 saltos \nPosicion final de x1: "<<x1actual<<"\nPosicion final de x2: "<<x2actual<<endl;
	}

	return 0;
}