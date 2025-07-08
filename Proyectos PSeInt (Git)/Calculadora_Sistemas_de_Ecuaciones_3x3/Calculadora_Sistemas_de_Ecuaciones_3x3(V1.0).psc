Algoritmo Calculadora_Sistemas_de_Ecuaciones_3x3
	Definir a1, a2, a3, x, b1, b2, b3, y1, dtg, dtx, dty, dtz, c1, c2, c3, z, d1, d2, d3, cvar, frmt, a11, a12, a13, a14, b21, b22, b23, b24, c31, c32, c33, c34, rspt, pcs Como Real
	Dimensionar ecg(3,4)
	Dimensionar ecf(3,4)
	Definir i, j Como Entero
	
	Escribir 'Bienvenido a la Calculadora de Sistemas de Ecuaciones lineales'
	Repetir
		Escribir 'Eliga el formato que posee'
		Escribir 'Salir | 1'
		Escribir 'Matriz | 2'
		Escribir 'Ecuacion | 3'
		Leer frmt
		Según frmt Hacer
			1:
				Escribir 'Gracias por Usar la Calculadora'
				Escribir 'System Shutting down...'
			2:
				Repetir
					Para i<-1 Hasta 3 Hacer
						Para j<-1 Hasta 4 Hacer
							Escribir 'Ingrese el valor de la posicion [', i, ',', j, ']'
							Leer ecg[i,j]
							ecf[i,j]<-ecg[i,j]
						FinPara
					FinPara
					Para i<-1 Hasta 3 Hacer
						Para j<-1 Hasta 4 Hacer
							Si j=4 Entonces
								Escribir '|', ecg[i,j], ''Sin Saltar
							SiNo
								Escribir ecg[i,j], ' 'Sin Saltar
							FinSi
						FinPara
						Escribir ''
					FinPara
					Escribir 'Esa es su matriz?'
					Escribir 'Si | 1'
					Escribir 'No | 2'
					Escribir 'Salir | 3'
					Leer rspt
					Según rspt Hacer
						1:
							Para j<-1 Hasta 4 Hacer
								ecf[2,j]<-(ecg[2,1]*ecg[1,j])-(ecg[1,1]*ecg[2,j])
							FinPara
							Para i<-1 Hasta 3 Hacer
								Para j<-1 Hasta 4 Hacer
									Si j=4 Entonces
										Escribir '|', ecg[i,j], ''Sin Saltar
									SiNo
										Escribir ecg[i,j], ' 'Sin Saltar
									FinSi
								FinPara
								Escribir ''
							FinPara
							Para j<-1 Hasta 4 Hacer
								ecf[3,j]<-(ecg[3,1]*ecg[1,j])-(ecg[1,1]*ecg[3,j])
							FinPara
							Para i<-1 Hasta 3 Hacer
								Para j<-1 Hasta 4 Hacer
									Si j=4 Entonces
										Escribir '|', ecg[i,j], ''Sin Saltar
									SiNo
										Escribir ecg[i,j], ' 'Sin Saltar
									FinSi
								FinPara
								Escribir ''
							FinPara
							Para i<-1 Hasta 3 Hacer
								Para j<-1 Hasta 4 Hacer
									ecg[i,j]<-ecf[i,j]
								FinPara
							FinPara
							Para i<-1 Hasta 3 Hacer
								Para j<-1 Hasta 4 Hacer
									Si j=4 Entonces
										Escribir '|', ecg[i,j], ''Sin Saltar
									SiNo
										Escribir ecg[i,j], ' 'Sin Saltar
									FinSi
								FinPara
								Escribir ''
							FinPara
							Para j<-1 Hasta 4 Hacer
								ecf[3,j]<-(ecg[3,2]*ecg[2,j])-(ecg[2,2]*ecg[3,j])
							FinPara
							Para i<-1 Hasta 3 Hacer
								Para j<-1 Hasta 4 Hacer
									Si j=4 Entonces
										Escribir '|', ecg[i,j], ''Sin Saltar
									SiNo
										Escribir ecg[i,j], ' 'Sin Saltar
									FinSi
								FinPara
								Escribir ''
							FinPara
							Para i<-1 Hasta 3 Hacer
								Para j<-1 Hasta 4 Hacer
									ecg[i,j]<-ecf[i,j]
								FinPara
							FinPara
							Para i<-1 Hasta 3 Hacer
								Para j<-1 Hasta 4 Hacer
									Si j=4 Entonces
										Escribir '|', ecg[i,j], ''Sin Saltar
									SiNo
										Escribir ecg[i,j], ' 'Sin Saltar
									FinSi
								FinPara
								Escribir ''
							FinPara
							Para j<-1 Hasta 4 Hacer
								ecf[1,j]<-(ecg[3,3]*ecg[1,j])-(ecg[1,3]*ecg[3,j])
							FinPara
							Para i<-1 Hasta 3 Hacer
								Para j<-1 Hasta 4 Hacer
									Si j=4 Entonces
										Escribir '|', ecg[i,j], ''Sin Saltar
									SiNo
										Escribir ecg[i,j], ' 'Sin Saltar
									FinSi
								FinPara
								Escribir ''
							FinPara
							Para j<-1 Hasta 4 Hacer
								ecf[2,j]<-(ecg[3,3]*ecg[2,j])-(ecg[2,3]*ecg[3,j])
							FinPara
							Para i<-1 Hasta 3 Hacer
								Para j<-1 Hasta 4 Hacer
									Si j=4 Entonces
										Escribir '|', ecg[i,j], ''Sin Saltar
									SiNo
										Escribir ecg[i,j], ' 'Sin Saltar
									FinSi
								FinPara
								Escribir ''
							FinPara
							Para i<-1 Hasta 3 Hacer
								Para j<-1 Hasta 4 Hacer
									ecg[i,j]<-ecf[i,j]
								FinPara
							FinPara
							
							Para j<-1 Hasta 4 Hacer
								ecf[1,j]<-(ecg[1,2]*ecg[2,j])-(ecg[2,2]*ecg[1,j])
							FinPara
							Para i<-1 Hasta 3 Hacer
								Para j<-1 Hasta 4 Hacer
									Si j=4 Entonces
										Escribir '|', ecg[i,j], ''Sin Saltar
									SiNo
										Escribir ecg[i,j], ' 'Sin Saltar
									FinSi
								FinPara
								Escribir ''
							FinPara
							Para i<-1 Hasta 3 Hacer
								Para j<-1 Hasta 4 Hacer
									ecg[i,j]<-ecf[i,j]
								FinPara
							FinPara
							
							Escribir 'La matriz resultante es'
							Para i<-1 Hasta 3 Hacer
								Para j<-1 Hasta 4 Hacer
									Si j=4 Entonces
										Escribir '|', ecg[i,j], ''Sin Saltar
									SiNo
										Escribir ecg[i,j], ' 'Sin Saltar
									FinSi
								FinPara
								Escribir ''
							FinPara
						Si (ecg[1,1] <> 0) o (ecg[2,2] <> 0) o (ecg[3,3] <> 0) entonces
							x <- ecg[1,4]/ecg[1,1]
							y1 <- ecg[2,4]/ecg[2,2]
							z <- ecg[3,4]/ecg[3,3]
							
							Escribir 'Y Las Soluciones son: X= ', x, ', Y= ', y1, ' y Z= ', z
							
						SiNo
							
							Escribir "El sistema no posee solucion Real (Division entre 0)"
							
						FinSi
						2:
						3:
						De Otro Modo:
							Escribir 'Por favor escoja una opción valida'
					FinSegún
				Hasta Que rspt=1
			3:
				Repetir
					Escribir 'Eliga la cantidad de variables:'
					Escribir 'Salir | 1'
					Escribir '2 Variables | 2'
					Escribir '3 Variables | 3'
					Leer cvar
					Según cvar Hacer
						1:
						2:
							Repetir
								Escribir 'Digite el Coeficiente de X en la Primera Ecuación'
								Leer a1
								Escribir 'Digite el Coeficiente de Y en la Primera Ecuación'
								Leer b1
								Escribir 'Digite el Termino Independiente de la Primera Ecuación'
								Leer c1
								Escribir 'Digite el Coeficiente de X en la Segunda Ecuación'
								Leer a2
								Escribir 'Digite el Coeficiente de Y en la Segunda Ecuación'
								Leer b2
								Escribir 'Digite el Termino Independiente de la Segunda Ecuación'
								Leer c2
								Escribir 'Quedan las ecuaciones: '
								Escribir '1° ', a1, 'x +', b1, 'y =', c1
								Escribir '2° ', a2, 'x +', b2, 'y =', c2
								Escribir 'Correcto?'
								Escribir 'Si | 1'
								Escribir 'No | 2'
								Leer rspt
							Hasta Que rspt=1
							Según rspt Hacer
								1:
									
									dtg <- (a1*b2)-(a2*b1)
									dtx <- (c1*b2)-(c2*b1)
									dty <- (a1*c2)-(a2*c1)
								Si dtg <> 0 
									x <- dtx/dtg
									y1 <- dty/dtg
									Escribir "Los determinantes son: "
									Escribir "Determinante General del Sistema: " dtg
									Escribir "Determinante General X: " dtx
									Escribir "Determinante General Y: " dty
									Escribir 'Las Soluciones son: X= ', x, ' y Y= ', y1
								SiNo
								 Escribir "El sistema no posee solucion Real (Division entre 0)"	
							 FinSi
							 
							 De Otro Modo:
									Escribir 'Por Favor Eliga una Opción Valida'
							FinSegún
						3:
							Repetir
								Escribir 'Digite el Coeficiente de X en la Primera Ecuación'
								Leer a1
								Escribir 'Digite el Coeficiente de Y en la Primera Ecuación'
								Leer b1
								Escribir 'Digite el Coeficiente de Z en la Primera Ecuación'
								Leer c1
								Escribir 'Digite el Termino Independiente de la Primera Ecuación'
								Leer d1
								Escribir 'Digite el Coeficiente de X en la Segunda Ecuación'
								Leer a2
								Escribir 'Digite el Coeficiente de Y en la Segunda Ecuación'
								Leer b2
								Escribir 'Digite el Coeficiente de Z en la Segunda Ecuación'
								Leer c2
								Escribir 'Digite el Termino Independiente de la Segunda Ecuación'
								Leer d2
								Escribir 'Digite el Coeficiente de X en la Tercera Ecuación'
								Leer a3
								Escribir 'Digite el Coeficiente de Y en la Tercera Ecuación'
								Leer b3
								Escribir 'Digite el Coeficiente de Z en la Tercera Ecuación'
								Leer c3
								Escribir 'Digite el Termino Independiente de la Tercera Ecuación'
								Leer d3
								Escribir 'Quedan las ecuaciones: '
								Escribir '1° ', a1, 'x +', b1, 'y +', c1, 'z =', d1
								Escribir '2° ', a2, 'x +', b2, 'y +', c2, 'z =', d2
								Escribir '3° ', a3, 'x +', b3, 'y +', c3, 'z =', d3
								Escribir 'Correcto?'
								Escribir 'Si | 1'
								Escribir 'No | 2'
								Leer rspt
								Según rspt Hacer
									1:
										dtg <- ((a1*b2*c3)+(a2*b3*c1)+(a3*b1*c2))-((c1*b2*a3)+(c2*b3*a1)+(c3*b1*a2))
										dtx <- ((d1*b2*c3)+(d2*b3*c1)+(d3*b1*c2))-((c1*b2*d3)+(c2*b3*d1)+(c3*b1*d2))
										dty <- ((a1*d2*c3)+(a2*d3*c1)+(a3*d1*c2))-((c1*d2*a3)+(c2*d3*a1)+(c3*d1*a2))
										dtz <- ((a1*b2*d3)+(a2*b3*d1)+(a3*b1*d2))-((d1*b2*a3)+(d2*b3*a1)+(d3*b1*a2))
									Si dtg <> 0 entonces	
										x <- dtx/dtg
										y1 <- dty/dtg
										z <- dtz/dtg
										
										
										Escribir "Los determinantes son: "
										Escribir "Determinante General del Sistema: " dtg
										Escribir "Determinante General X: " dtx
										Escribir "Determinante General Y: " dty
										Escribir "Determinante General Z: " dtz
										Escribir 'Las Soluciones son: X= ', x, ', Y= ', y1, ' y Z= ', z
										
									SiNo
										Escribir "El sistema no posee solucion Real (Division entre 0)"
										
									FinSi
									
									
									Escribir "Quieres ver el proceso?"
									Escribir "Si | 1"
									Escribir "No | 2"
									Leer pcs
									
									Segun pcs
										Caso 1:
											
											
											
											
										Caso 2:
											
											
											
											
										De Otro Modo:
											
											
											
											
										
									FinSegun
									
								FinSegún
							Hasta Que rspt=1
						De Otro Modo:
							Escribir 'Por Favor Eliga una Opción Valida'
					FinSegún
				Hasta Que cvar=1
			De Otro Modo:
				Escribir 'Por Favor Eliga una Opción Valida'
		FinSegún
	Hasta Que frmt=1
FinAlgoritmo
