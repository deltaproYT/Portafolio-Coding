#include <iostream>
#include <cmath> // Libreria para operaciones matematicas

// -- Error en el codigo, muestra resultados incorrectos y antes de pedir los numeros --


int main(){

    double num1, num2, resultado;
    char operacion;

    std::cout << "Bienvenido a la calculadora basica" << std::endl;
    std::cout << "Ingrese la Operacion deseada (+, -, *, /): ";
    std::cin >> operacion;
    
    switch (operacion) {
        case '+':
            std::cout << "Ingrese el primer numero: ";
            std::cin >> num1;
            std::cout << "Ingrese el segundo numero: ";
            std::cin >> num2;
            resultado = num1 + num2;
            std::cout << "El resultado de la suma es: " << resultado << std::endl;
            break;
        case '-':
            std::cout << "Ingrese el primer numero: ";
            std::cin >> num1;
            std::cout << "Ingrese el segundo numero: ";
            std::cin >> num2;
            resultado = num1 - num2;
            std::cout << "El resultado de la resta es: " << resultado << std::endl;
            break;
        case '*':
            std::cout << "Ingrese el primer numero: ";
            std::cin >> num1;
            std::cout << "Ingrese el segundo numero: ";
            std::cin >> num2;
            resultado = num1 * num2;
            std::cout << "El resultado de la multiplicacion es: " << resultado << std::endl;
            break;
        case '/':
            std::cout << "Ingrese el primer numero: ";
            std::cin >> num1;
            std::cout << "Ingrese el segundo numero: ";
            std::cin >> num2;
            
            if (num2 != 0) {
                resultado = num1 / num2;
                std::cout << "El resultado de la division es: " << resultado << std::endl;
            } else {
                std::cout << "Error: Division por cero no permitida." << std::endl;
            }
            
            break;
        default:
            std::cout << "Operacion no valida." << std::endl;
    }

    std::cout << "Gracias por usar la calculadora basica." << std::endl;




}