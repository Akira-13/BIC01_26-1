Algoritmo InvertirCifras
	leer N
	invertido = 0
	Mientras N > 0 Hacer
		invertido = invertido * 10
		unidades = N % 10
		invertido = invertido + unidades
		N = trunc(N / 10)
	Fin Mientras
	imprimir invertido
FinAlgoritmo
