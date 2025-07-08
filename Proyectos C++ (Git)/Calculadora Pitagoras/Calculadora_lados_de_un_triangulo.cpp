#include <iostream>
#include <cmath> // Libreria para operaciones matematicas

int main(){

std::cout<<"Que lado del triangulo desea calcular? "<<'\n'; //imprimir texto en pantalla y salto de linea
std::cout<<"1. Cateto opuesto"<<'\n'; //imprimir texto en pantalla y salto de linea
std::cout<<"2. Cateto adyacente"<<'\n'; //imprimir texto en pantalla y salto de linea
std::cout<<"3. Hipotenusa"<<'\n'; //imprimir texto en pantalla y salto de linea

std::string respuesta; //declarar variable de texto
std::getline(std::cin, respuesta); //leer variable de texto

if (respuesta == "1") { //si la variable de texto es igual a 1
    std::cout<<"Introduzca el valor del cateto adyacente: "; //imprimir texto en pantalla
    double cateto_adyacente; //declarar variable decimal
    std::cin>>cateto_adyacente; //leer variable decimal
    std::cout<<"Introduzca el valor de la hipotenusa: "; //imprimir texto en pantalla
    double hipotenusa; //declarar variable decimal
    std::cin>>hipotenusa; //leer variable decimal
    double cateto_opuesto = sqrt(pow(hipotenusa,2) - pow(cateto_adyacente,2)); //calcular cateto opuesto
    std::cout<<"El cateto opuesto es: "<<cateto_opuesto<<'\n'; //imprimir resultado   
}

else if (respuesta == "Cateto Opuesto") { //si la variable de texto es igual a 1
    std::cout<<"Introduzca el valor del cateto adyacente: "; //imprimir texto en pantalla
    double cateto_adyacente; //declarar variable decimal
    std::cin>>cateto_adyacente; //leer variable decimal
    std::cout<<"Introduzca el valor de la hipotenusa: "; //imprimir texto en pantalla
    double hipotenusa; //declarar variable decimal
    std::cin>>hipotenusa; //leer variable decimal
    double cateto_opuesto = sqrt(pow(hipotenusa,2) - pow(cateto_adyacente,2)); //calcular cateto opuesto
    std::cout<<"El cateto opuesto es: "<<cateto_opuesto<<'\n'; //imprimir resultado   
}


else if (respuesta == "2") { //si la variable de texto es igual a 2
    std::cout<<"Introduzca el valor del cateto opuesto: "; //imprimir texto en pantalla
    double cateto_opuesto; //declarar variable decimal
    std::cin>>cateto_opuesto; //leer variable decimal
    std::cout<<"Introduzca el valor de la hipotenusa: "; //imprimir texto en pantalla
    double hipotenusa; //declarar variable decimal
    std::cin>>hipotenusa; //leer variable decimal
    double cateto_adyacente = sqrt(pow(hipotenusa,2) - pow(cateto_opuesto,2)); //calcular cateto adyacente
    std::cout<<"El cateto adyacente es: "<<cateto_adyacente<<'\n'; //imprimir resultado
}

else if (respuesta == "Cateto Adyacente") { //si la variable de texto es igual a 2
    std::cout<<"Introduzca el valor del cateto opuesto: "; //imprimir texto en pantalla
    double cateto_opuesto; //declarar variable decimal
    std::cin>>cateto_opuesto; //leer variable decimal
    std::cout<<"Introduzca el valor de la hipotenusa: "; //imprimir texto en pantalla
    double hipotenusa; //declarar variable decimal
    std::cin>>hipotenusa; //leer variable decimal
    double cateto_adyacente = sqrt(pow(hipotenusa,2) - pow(cateto_opuesto,2)); //calcular cateto adyacente
    std::cout<<"El cateto adyacente es: "<<cateto_adyacente<<'\n'; //imprimir resultado
}





else if (respuesta == "3") { //si la variable de texto es igual a 3
    std::cout<<"Introduzca el valor del cateto opuesto: "; //imprimir texto en pantalla
    double cateto_opuesto; //declarar variable decimal
    std::cin>>cateto_opuesto; //leer variable decimal
    std::cout<<"Introduzca el valor del cateto adyacente: "; //imprimir texto en pantalla
    double cateto_adyacente; //declarar variable decimal
    std::cin>>cateto_adyacente; //leer variable decimal
    double hipotenusa = sqrt(pow(cateto_opuesto,2) + pow(cateto_adyacente,2)); //calcular hipotenusa
    std::cout<<"La hipotenusa es: "<<hipotenusa<<'\n'; //imprimir resultado
} 

else if (respuesta == "Hipotenusa") { //si la variable de texto es igual a 3
    std::cout<<"Introduzca el valor del cateto opuesto: "; //imprimir texto en pantalla
    double cateto_opuesto; //declarar variable decimal
    std::cin>>cateto_opuesto; //leer variable decimal
    std::cout<<"Introduzca el valor del cateto adyacente: "; //imprimir texto en pantalla
    double cateto_adyacente; //declarar variable decimal
    std::cin>>cateto_adyacente; //leer variable decimal
    double hipotenusa = sqrt(pow(cateto_opuesto,2) + pow(cateto_adyacente,2)); //calcular hipotenusa
    std::cout<<"La hipotenusa es: "<<hipotenusa<<'\n'; //imprimir resultado
}

else { //si la variable de texto no es igual a 1, 2 o 3
    std::cout<<"Opcion no valida"; //imprimir texto en pantalla
}



return 0; //retornar 0 al sistema operativo
std::cout<<"Fin del programa"<<'\n'; //imprimir texto en pantalla y salto de linea
}// Fin del programa