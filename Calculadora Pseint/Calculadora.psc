Algoritmo Calculadora
	Definir valorUno Como Entero
	Definir valorDos Como Entero
	Definir menuSeleccion Como Real
	Escribir 'Bienvenido a la calculadora basica de cosas xd'
	Escribir 'Ingrese Valor uno'
	Leer valorUno
	Escribir 'Ingrese Valor dos'
	Leer valorDos
	Escribir 'Menu de seleccion'
	Escribir '1. Suma'
	Escribir '2. Resta'
	Escribir '3. Multiplicacion'
	Escribir '4. Division'
	Escribir '5. Raiz'
	Escribir '6. Exponente'
	Escribir '7. Salir'
	Mientras menuSeleccion<>7 Hacer
		Leer menuSeleccion
		Si menuSeleccion=1 Entonces
			Escribir 'Suma de ', valorUno, ' + ', valorDos, ' es igual a ', valorUno+valorDos
		FinSi
		Si menuSeleccion=2 Entonces
			Escribir 'Resta de ', valorUno, ' - ', valorDos, ' es igual a ', valorUno-valorDos
		FinSi
		Si menuSeleccion=3 Entonces
			Escribir 'Multiplicacion de ', valorUno, ' * ', valorDos, ' es igual a ', valorUno*valorDos
		FinSi
		Si menuSeleccion=4 Entonces
			Si valorDos=0 Entonces
				Escribir 'No w, no dividas entre cero o abriras un agujero negro'
			SiNo
				Escribir 'Division de ', valorUno, ' / ', valorDos, ' es igual a ', valorUno/valorDos
			FinSi
		FinSi
		Si menuSeleccion=5 Entonces
			Si valorDos=0 O valorUno<0 Entonces
				Escribir 'No w,esto es imaginario o indefinido (como tu novia XDDDDDD)'
			SiNo
				Escribir 'Raiz de ', valorUno, ' Raiz ', valorDos, ' es igual a ', valorUno*(1/valorDos)
			FinSi
		FinSi
		Si menuSeleccion=6 Entonces
			Escribir 'Valor de ', valorUno, ' elevado a ', valorDos, ' es igual a ', valorUno^valorDos
		FinSi
		Si menuSeleccion>7 Entonces
			Escribir 'como que mas de 7 si eso no esta en el menu >:('
		FinSi
	FinMientras
FinAlgoritmo
