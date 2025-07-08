#include <iostream>
#include <cmath>


int main(){

    std::cout<<"Bienvenido a la calculadora de la conjetura de Collatz\n"
                <<"Por favor ingrese un numero entero positivo: ";

    int n;
    std::cin>>n; 
    std::cout<<n<<'\n';

    
    
    
    
    do{
        if (n % 2 == 0) { //si el numero es par
            n = n / 2; //dividir el numero entre 2
        } else { //si el numero es impar
            n = (3 * n) + 1; //multiplicar el numero por 3 y sumarle 1
        }
        std::cout<<n<<'\n'; //imprimir el resultado
    } while (n != 1); //repetir mientras el numero no sea 1




    return 0; //retornar 0

}