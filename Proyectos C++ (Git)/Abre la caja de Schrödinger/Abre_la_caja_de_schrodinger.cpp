#include <iostream>
#include <cmath> 
#include <ctime> 


int main(){
    
    std::string nv1 = "()__()";
    std::string nv2 = "(='w'=)";
    std::string nv3 = "(>___<)";

       
    
    std::cout<<"Bienvenidos a la prueba de la teoria del gato de Schrodinger"<<'\n'; //imprimir texto en pantalla

    std::cout<<nv1<<'\n';
    std::cout<<nv2<<'\n';
    std::cout<<nv3<<'\n';
    std::string nombre; //declarar variable de texto
    std::string abrir;



    std::cout<<"Se nos perdio el gato, pero tenemos un conejito gordito que se ofrecio de\nvoluntario <3";
    std::cout<<'\n'; //imprimir salto de linea

    std::cout<<"Quieres ponerle un nombre al conejito? (si/no): "; //imprimir texto en pantalla
    std::string respuesta; //declarar variable de texto
    std::getline(std::cin, respuesta); //leer variable de texto
if (respuesta == "si" || respuesta == "Si") { //si la variable es igual a "si"
        std::cout<<"Escribe el nombre del conejito: "; //imprimir texto en pantalla
        std::getline(std::cin, nombre); //leer variable de texto
        std::cout<<"\nEl nombre del conejito es "<<nombre<<'\n'; //imprimir variable de texto
    
        
    } 
    
    
    else if (respuesta == "no" || respuesta == "No") { 
        std::cout<<"\nBueno no le pondremos nombre, aburrido -_-"; 
    } 
    
    
    else { //si la variable no es igual a "si" o "no"
        std::cout<<"\nSi no quieres poner nombre solo escribe no -_-"<<std::endl<<"sabes que, por chistoso bye >:(";
        std::cout<<"\n(Final Plim Plim) Te crees gracioso hdptm >:V\n"; //imprimir texto en pantalla
        return 0; //salir del programa
    }


    std::cout<<'\n'; //imprimir salto de linea


    std::cout<<"Nuestro amigo el conejito "<<nombre<<" se escabullo y se metio en una caja con una\nzanahoria\n";
    std::cout<<"Pero no sabemos si el conejito gordito se comio la zanahoria que iba a ser tu \nalmuerzo o no\n"; //imprimir texto en pantalla
    std::cout<<"Pero no te preocupes, al conejito gordito no le pasara nada, pero por otro lado tu zanahoria no contara con la misma suerte... "<<'\n'; //imprimir texto en pantalla
    std::cout<<"El conejito esta dentro de su caja, y ahorita la abriremos para ver si la\nzanahoria sigue o no"<<"\n\n\n";

    std::cout<<"Solo presiona enter para abrir la caja y ver si el conejito gordito se comio tu zanahoria\n"; //imprimir texto en pantalla
    std::getline(std::cin, abrir); //leer variable de texto

    if (abrir.empty()) { //si la variable es igual a "si"
        std::cout<<"Abriendo la caja..."<<'\n'; //imprimir texto en pantalla
    } 
    
    else { //si la variable no es igual a "si" o "no"
        std::cout<<"Te dije que solo presionaras enter -_- Si no abres la caja para que abres un\ncodigo que dice -abre la caja de schrodinger- "<<'\n'<<"(Final Pelele)"; //imprimir texto en pantalla
        return 0; //salir del programa
    }





    srand(time(NULL));
    int probabilidad = (rand() % 10000) + 1; //generar un numero aleatorio entre 1 y 100


if (probabilidad >=9990 && probabilidad <=10000 ) { //si el numero aleatorio es menor o igual a 5000
        std::cout<<'\n'; //imprimir salto de linea
        std::cout<<"(Final Hiroshima)La zanahoria resulto se radioactiva y al masticarla termino creando una\nexplosion nuclear con la capacidad de destruir la realidad y volverla un huevo\nque luego el verdadero gato de schrodinger revelaria que era una posibilidad\ncompletamente viable pues ninguna posibilidad es un 0% exacto"<<'\n'; //imprimir texto en pantalla
    } 
    
    else if(probabilidad > 4995 && probabilidad < 9990) { //si el numero aleatorio es mayor a 5000
        std::cout<<'\n'; //imprimir salto de linea
        std::cout<<"(Final Bueno)Felicidades!!! El conejito gordito no se comio tu zanahoria :D"<<'\n'; //imprimir texto en pantalla
    } 

    else if(probabilidad >= 0 && probabilidad <=4995) { //si el numero aleatorio es mayor a 5000
        std::cout<<'\n'; //imprimir salto de linea
        std::cout<<"(Final Malo) El conejito gordito se comio tu zanahoria, ni modo, F..."<<'\n'; //imprimir texto en pantalla
    } 


    std::cout<<'\n'; //imprimir salto de linea

    std::cout<<"Gracias por participar en la prueba de la teoria del gato de Schrodinger\n"; //imprimir texto en pantalla

    return 0; //salir del programa


// Tengo que poner un marcador aleatorio con numeros entre el 1 y el 10,000 y poner que la variable switch haga casos dependiendo de que rango de numero este afectando


}