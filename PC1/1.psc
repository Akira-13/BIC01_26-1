Algoritmo telefonia
	Definir minutos Como Entero
	Definir minutos_adicionales Como Entero
	Definir tarifa como Entero
	
	Imprimir "Ingrese la cantidad de minutos: "
	Leer minutos
	
	// Primer caso: menos de 100 minutos es tarifa plana
	si minutos <= 100 Entonces
		tarifa = 50
	FinSi
	// Segundo caso: entre 101 a 300 minutos, 50 + 0.5*minutos_adicionales
	si minutos >= 101 y minutos <= 300 Entonces
		minutos_adicionales = minutos - 100
		tarifa = 50 + 0.5*minutos_adicionales
	FinSi
	// Tercer caso: entre 301 a 300 minutos, 150 + 0.3*minutos_adicionales
	si minutos >= 301 y minutos <= 600 Entonces
		minutos_adicionales = minutos - 300
		tarifa = 150 + 0.3*minutos_adicionales
	FinSi
	// Cuarto caso: mas de 600, 200 + 0.2*minutos_adicionales
	si minutos >= 601 Entonces
		minutos_adicionales = minutos - 600
		tarifa = 200 + 0.2*minutos_adicionales
	FinSi
	
	Imprimir "La tarifa total es: ", tarifa
FinAlgoritmo
