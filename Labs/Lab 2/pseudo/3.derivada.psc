Algoritmo VelocidadFinal
	
	Leer n
	
	Dimensionar coeficiente[n]
	
	Para i<-0 Hasta n-1 Con Paso 1 Hacer
		Leer coeficiente[i]
	Fin Para
	
	Dimensionar derivada[n]
	
	Para i<-0 Hasta n-1 Con Paso 1 Hacer
		Si coeficiente[i] <> 0 Entonces
			derivada[i] = coeficiente[i] - 1
		SiNo
			derivada[i] = 0
		Fin Si
	Fin Para
	
	Para i<-0 Hasta n-1 Con Paso 1 Hacer
		Imprimir derivada[i]
	Fin Para
	
FinAlgoritmo
