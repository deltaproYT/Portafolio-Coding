Algoritmo Calculadora_de_Sistemas_de_Ecuaciones_Lineales
	definir a1, a2, a3, x, b1, b2, b3, y1, dtg, dtx, dty, dtz, c1, c2, c3, z, d1, d2, d3, cvar como real
	
	Escribir "Bienvenido a la Calculadora de Sistemas de Ecuaciones lineales"
	
	
	Repetir
	Escribir "Eliga la cantidad de variables:"
	Escribir "Salir | 1"
	Escribir "2 Variables | 2"
	Escribir "3 Variables | 3"
	Leer cvar
	
	
	Segun cvar hacer
		
		caso 1:
			Escribir "Gracias por Usar la Calculadora"
			Escribir "System Shutting down..."
		
		
		Caso 2:
			Escribir "Digite el Coeficiente de X en la Primera Ecuaci�n"
			Leer a1
			Escribir "Digite el Coeficiente de Y en la Primera Ecuaci�n"
			Leer b1
			Escribir "Digite el Termino Independiente de la Primera Ecuaci�n"
			Leer c1
			Escribir "Digite el Coeficiente de X en la Segunda Ecuaci�n"
			Leer a2
			Escribir "Digite el Coeficiente de Y en la Segunda Ecuaci�n"
			Leer b2
			Escribir "Digite el Termino Independiente de la Segunda Ecuaci�n"
			Leer c2
			
			
			dtg = (a1 * b2) - (a2 * b1)
			
			dtx = (c1 * b2) - (c2 * b1)
			
			dty = (a1 * c2) - (a2 * c1)
			
			x = dtx / dtg
			y1 = dty / dtg
		
			Escribir "Las Soluciones son: X= " x " y Y= " y1
		
		Caso 3:
		
			Escribir "Digite el Coeficiente de X en la Primera Ecuaci�n"
			Leer a1
			Escribir "Digite el Coeficiente de Y en la Primera Ecuaci�n"
			Leer b1
			Escribir "Digite el Coeficiente de Z en la Primera Ecuaci�n"
			Leer c1
			Escribir "Digite el Termino Independiente de la Primera Ecuaci�n"
			Leer d1
			Escribir "Digite el Coeficiente de X en la Segunda Ecuaci�n"
			Leer a2
			Escribir "Digite el Coeficiente de Y en la Segunda Ecuaci�n"
			Leer b2
			Escribir "Digite el Coeficiente de Z en la Segunda Ecuaci�n"
			Leer c2
			Escribir "Digite el Termino Independiente de la Segunda Ecuaci�n"
			Leer d2
			Escribir "Digite el Coeficiente de X en la Tercera Ecuaci�n"
			Leer a3
			Escribir "Digite el Coeficiente de Y en la Tercera Ecuaci�n"
			Leer b3
			Escribir "Digite el Coeficiente de Z en la Tercera Ecuaci�n"
			Leer c3
			Escribir "Digite el Termino Independiente de la Tercera Ecuaci�n"
			Leer d3
			
			dtg = ((a1 * b2 * c3) + (a2 * b3* c1) + (a3 * b1 * c2)) - ((c1 * b2 * a3)+(c2 * b3 * a1)+(c3 * b1 * a2))
			
			dtx = ((d1 * b2 * c3) + (d2 * b3* c1) + (d3 * b1 * c2)) - ((c1 * b2 * d3)+(c2 * b3 * d1)+(c3 * b1 * d2))
			
			dty = ((a1 * d2 * c3) + (a2 * d3* c1) + (a3 * d1 * c2)) - ((c1 * d2 * a3)+(c2 * d3 * a1)+(c3 * d1 * a2))
			
			dtz = ((a1 * b2 * d3) + (a2 * b3* d1) + (a3 * b1 * d2)) - ((d1 * b2 * a3)+(d2 * b3 * a1)+(d3 * b1 * a2))
			
			x = dtx / dtg
			y1 = dty / dtg
			z = dtz / dtg
			
			
			
			Escribir "Las Soluciones son: X= " x ", Y= " y1 " y Z= " z
			
			
			
		De Otro Modo:
			
			Escribir "Por Favor Eliga una Opci�n Valida"
	
	FinSegun
	
	Hasta que cvar = 1
	
	
	
	
	
	
	
	
	
	
	
	
	
	
FinAlgoritmo
