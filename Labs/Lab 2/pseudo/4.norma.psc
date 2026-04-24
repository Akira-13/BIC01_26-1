Algoritmo NormaEuclidiana
	Leer n
	Dimensionar v[n]
	Para i<-0 Hasta n-1 Con Paso 1 Hacer
		Leer v[i]
	Fin Para
	
	norma = 0
	
	Para i<-0 Hasta n-1 Con Paso 1 Hacer
		norma = norma + v[i]^2
	Fin Para
	
	Imprimir norma
FinAlgoritmo
