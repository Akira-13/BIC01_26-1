Algoritmo RaicesPolinomio
	Leer a, b, c
	discriminante = b^2-4*a*c
	raices_reales = Verdadero
	Si discriminante < 0 Entonces
		Imprimir "No existen raíces reales"
		raices_reales = Falso
	FinSi
	Si raices_reales == Verdadero Entonces
		r1 = (-b + raiz(discriminante))/2*a
		r2 = (-b - raiz(discriminante))/2*a
		Imprimir r1
		Imprimir r2
	FinSi
FinAlgoritmo
