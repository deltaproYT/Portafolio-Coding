#include <iostream> // Libreria para imprimir en pantalla
#include <cmath> // Libreria para operaciones matematicas

int main(){

    double farenheit; //declarar variable decimal
    double celsius; //declarar variable decimal
    char opcion; //declarar variable de un caracter
    
    std::cout<<"Bienvenido al conversor de grados Farenheit y Celsius\n";
    std::cout<<"Por favor, escoja la unidad de la que quiera convertir:\n";
    std::cout<<"Farenheit a Celsius\n"; 
    std::cout<<"Celsius a Farenheit\n"; 
    std::cout<<"Salir\n"; //imprimir texto en pantalla

    std::cin>>opcion; //leer variable de un caracter



    if (opcion == '1' || opcion == 'F' || opcion == 'f') { //si la opcion es 1 o F o f
        std::cout<<"Ingrese la temperatura en grados Farenheit: "; //imprimir texto en pantalla
        std::cin>>farenheit; //leer variable decimal
        celsius = (farenheit - 32) * 5/9; //convertir de farenheit a celsius
        std::cout<<farenheit<<" grados Farenheit son "<<celsius<<" grados Celsius\n"; //imprimir variable decimal
    
        return 0; //salir del programa
    
    } 
    
    
    else if (opcion == '2' || opcion == 'C' || opcion == 'c') { //si la opcion es 2 o C o c
        std::cout<<"Ingrese la temperatura en grados Celsius: "; //imprimir texto en pantalla
        std::cin>>celsius; //leer variable decimal
        farenheit = (celsius * 9/5) + 32; //convertir de celsius a farenheit
        std::cout<<celsius<<" grados Celsius son "<<farenheit<<" grados Farenheit\n"; //imprimir variable decimal
    
        return 0; //salir del programa
    } 
    
    
    else if (opcion == '3' || opcion == 'S' || opcion == 's') { //si la opcion es 3 o S o s
        std::cout<<"Gracias por usar el conversor de grados Farenheit y Celsius\n"; //imprimir texto en pantalla
    
        return 0; //salir del programa
    
    } 
    
    
    
    else { //si la opcion no es valida
        std::cout<<"Opcion no valida, por favor intente de nuevo\n"; //imprimir texto en pantalla
    
    
    
        return 0; //salir del programa
    
    }
    





}