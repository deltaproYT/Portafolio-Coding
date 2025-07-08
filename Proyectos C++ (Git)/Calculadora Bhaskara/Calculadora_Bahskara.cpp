#include <iostream> // Libreria para entrada y salida de datos
#include <cmath>


int main(){

double a;
double b;
double c;

std::cout<<"Bienvenido a la Calculadora de formula General o Bahskhara"<<'\n'<<"Digite el valor de a: "<<'\n'; //imprimir texto en pantalla y salto de linea
std::cin>>a;
std::cout<<"Digite el valor de b: "<<'\n';
std::cin>>b;
std::cout<<"Digite el valor de c: "<<'\n';  
std::cin>>c;

long double discriminante = b*b - 4*a*c; //calcular el discriminante
std::cout<<"El discriminante es: "<<discriminante<<'\n'; //imprimir el discriminante

if (discriminante > 0) { //si el discriminante es mayor que 0
    std::cout<<"Eso significa que la ecuacion tiene dos soluciones reales"<<'\n'; //imprimir texto en pantalla

    long double respuesta1 = (-b + sqrt(discriminante))/(2*a); //calcular la primera respuesta
    std::cout<<"La primera respuesta es: "<<respuesta1<<'\n'; //imprimir la primera respuesta
    
    long double respuesta2 = (-b - sqrt(discriminante))/(2*a); //calcular la segunda respuesta
    std::cout<<"La segunda respuesta es: "<<respuesta2<<'\n'; //imprimir la segunda respuesta
    
    return 0; //salir del programa

} 


    else if (discriminante == 0) { //si el discriminante es igual a 0
    std::cout<<"Eso significa que la ecuacion tiene una solucion real"<<'\n'; //imprimir texto en pantalla

    long double respuesta = (-b + sqrt(discriminante))/(2*a); //calcular la primera respuesta
    std::cout<<"La primera respuesta es: "<<respuesta<<'\n'; //imprimir la primera respuesta

return 0; //salir del programa


} 


    else { //si el discriminante es menor que 0
    std::cout<<"Eso significa que la ecuacion no tiene soluciones reales"<<'\n'; //imprimir texto en pantalla

    return 0; //salir del programa
}








// Hecho por Jordy Ortiz

}