#include <iostream>
using namespace std;

int main(){
	int alumno;
	float examen1,proyecto1,notaFinal1,examen2,proyecto2,notaFinal2;

	do{
	   cout<<"\nIngrese el codigo del alumno: ";
 	   cin>>alumno;

		if(alumno>999 && alumno<10000){
            cout<<"Ingrese la nota de examen para la asignatura 1: ";
	  		cin>>examen1;

		 	cout<<"Ingrese la nota del proyecto para la asignatura 1: ";
	  		cin>>proyecto1;

		 	cout<<"Ingrese la nota de examen para la asignatura 2: ";
	  		cin>>examen2;

		 	cout<<"Ingrese la nota del proyecto para la asignatura 2: ";
	  		cin>>proyecto2;

     		notaFinal1=examen1*0.7+proyecto1*0.3;
     		notaFinal2=examen2*0.7+proyecto2*0.3;

    		cout<<"\n| Alumno | Examen 1 \t| Proyecto 1 \t| Nota Final 1 \t| Examen 2 \t| Proyecto 2 \t| Nota Final 2 \t|"<<endl;
		  	cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
			cout<<"| "<<alumno<<"\t| "<<examen1<<"\t\t| "<<proyecto1<<"\t\t| "<<notaFinal1<<"\t\t| "<<examen2<<"\t\t| "<<proyecto2<<"\t\t| "<<notaFinal2<<"\t\t| "<<endl;
		}else if(alumno<0){
			  cout<<"\nFin del programa"<<endl;
		}else{
			  	cout<<"\nEl codigo del alumno ingresado no es de 4 digitos"<<endl;
		}

	}while(alumno>=0);
	return 0;
}