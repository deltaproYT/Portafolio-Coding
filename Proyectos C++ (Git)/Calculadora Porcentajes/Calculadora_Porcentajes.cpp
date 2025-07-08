#include <iostream>
#include <cmath> 


int main(){

    double total;
    double parcial;
    
    
    
    std::cout<<"Ingrese el valor total\n";
    std::cin>>total; //leer variable decima,l
    std::cout<<"Ingrese el valor parcial\n";
    std::cin>>parcial; //leer variable decimal
    std::cout<<'\n'; //imprimir salto de linea
    
    
    
    double resultado = (parcial * 100) / total; //declarar variable decimal
    
    std::cout<<"El resultado es: "<<resultado<<'\n'; //imprimir variable decimal












}