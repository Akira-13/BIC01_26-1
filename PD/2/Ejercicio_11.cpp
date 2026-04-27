#include <iostream>
using namespace std;

int main(){
	int x1,x2,d1,d2,x1final,x2final;

	cout<<"Ingrese la posicion de x1: ";
	cin>>x1;
	cout<<"Ingrese la distancia que puede saltar x1: ";
	cin>>d1;

	cout<<"Ingrese la posicion de x2: ";
	cin>>x2;
	cout<<"Ingrese la distancia que puede saltar x2: ";
	cin>>d2;

	x1final=x1+d1*7;
	x2final=x2+d2*7;

	if(x1final==x2final){
		cout<<"\nLas personas se encontraron luego de 7 saltos, posicion final: "<<x1final;
	}else{
 		cout<<"\nLas personas no se encontraron luego de 7 saltos \nPosicion final de x1: "<<x1final<<"\nPosicion final de x2: "<<x2final<<endl;
	}
	return 0;
}