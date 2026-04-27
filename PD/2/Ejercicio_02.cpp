#include <iostream>
using namespace std;

int main(){
	float pasaje, precioAdulto, precioNino,precioTotal;
	int numAdulto, numNino, dia;

	cout<<"Ingrese el precio del pasaje: ";
	cin>>pasaje;

	cout<<"Ingrese el numero de adultos: ";
	cin>>numAdulto;

	cout<<"Ingrese el numero de ninos: ";
	cin>>numNino;

	cout<<"Ingrese el dia de la semana (tomando en cuenta el lunes como 1 y domingo como 7): ";
	cin>>dia;

	switch(dia){
		case 1:
 			 precioAdulto=pasaje*0.8*numAdulto;
 			 precioNino=pasaje*0.4*numNino;
		   	 precioTotal=precioAdulto+precioNino;
			 break;

		case 2:
			 precioAdulto=pasaje*0.9*numAdulto;
 			 precioNino=pasaje*0.3*numNino;
		   	 precioTotal=precioAdulto+precioNino;
			 break;

        case 3:
			 precioAdulto=pasaje*0.8*numAdulto;
 			 precioNino=pasaje*0.4*numNino;
		   	 precioTotal=precioAdulto+precioNino;
			 break;

		case 4:
 			 precioAdulto=pasaje*0.9*numAdulto;
 			 precioNino=pasaje*0.3*numNino;
		   	 precioTotal=precioAdulto+precioNino;
			 break;

		case 5:
			 precioAdulto=pasaje*numAdulto;
 			 precioNino=pasaje*0.3*numNino;
		   	 precioTotal=precioAdulto+precioNino;
			 break;

        case 6:
			 precioAdulto=pasaje*0.7*numAdulto;
 			 precioNino=pasaje*0.5*numNino;
		   	 precioTotal=precioAdulto+precioNino;
			 break;

        case 7:
			 precioAdulto=pasaje*0.7*numAdulto;
 			 precioNino=pasaje*0.5*numNino;
		   	 precioTotal=precioAdulto+precioNino;
			 break;

		default:
				cout<<"\nNo esta ingresando un dia de la semana valido.";
				return 0;

	}

	cout<<"\nPrecio total para adultos mayores: "<<precioAdulto<<endl;
	cout<<"Precio total para ninos: "<<precioNino<<endl;
	cout<<"Precio total: "<<precioTotal<<endl;

	return 0;
}