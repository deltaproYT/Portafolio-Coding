#include <iostream>
#include <cmath> 

int main() {

    double radio; // Declarar variable decimal
    const long double pi = 3.14159265358979323846264338327; // Declarar variable decimal
    double resultado; // Declarar variable decimal para el resultado

    std::cout<<"Para calcular el perimetro de un circulo introduzca el valorde su radio por favor ";
    std::cin>>radio; // Leer variable decimal
    resultado = 2 * pi * radio; // Calcular el perimetro del circulo

    std::cout<<"El perimetro del circulo es: "<<resultado<<"cm"<<'\n'; // Imprimir resultado

}
