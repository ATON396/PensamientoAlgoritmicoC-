//
//  main.cpp
//  Ejercicio_8
//
//  Created by Alejandro Sacritan Leal on 14/02/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

// Variables.
int numeroin= 1, prefijo = 0, numero_dos = 0, cont_otroOper = 0, cont_Movistar = 0, cont_Claro = 0, cont_Diji=0;
char l = 'y';
///

int main() {
 
//Presentacion del prgrama
 cout<<"Este Programa evalua y suma los numeros telefonicos ingresados, discrimiendo por operador: "<<endl;
 cout<<" "<<endl;
    
// Menu de interaccion. Usuario añade numeros para evaluar.
    do {
        
        cout<<"Ingresa el numero celular a evaluar: "<<endl;
            cin>>numeroin;
        cout<<" "<<endl;
            
            
        cout<<"Para añadir mas numeros djita 'y' : "<<endl;
        cout<<"Para ver Resultados dijita 'p' : "<<endl;
            cin>>l;
        cout<<" "<<endl;
      
            
        // Reaizo la evaluacion del prefijo
            numero_dos = numeroin;
            prefijo= numero_dos/10000;
        
        // Se evalua cuandos dijitos tiene el numero ingresado
            while (numeroin != 0) {
                numeroin/=10;
                cont_Diji++;
                
            }
        
        // Se realiza la evaluacion del numero discriminando por numero total de digitos
            if (cont_Diji == 7){
                
       //Se discrimina segun el prejijo
                if (prefijo == 315){
                    cont_Movistar++;
                }
                if (prefijo == 310){
                    cont_Claro++;
                }
                if(prefijo != 315 && prefijo != 310){
                    cont_otroOper++;
                }// Termino la evaluacion del prefijo
                
            }
            else{
                if (cont_Diji < 7 || cont_Diji > 7 ){
                    cont_otroOper++;
                }
            }
        // Se reinicia el contador de dijitos para que no se sume para el siguente
            cont_Diji=0;
        
//Se evalua si el usuario desea repetir el ciclo de nuevo
    } while (l=='y');


//Resultados del programa
    cout<<" "<<endl;
    cout<<"Resultado de la lista de numeros: "<<endl;
    cout<<" "<<endl;
    
    cout<<" Movistar: "<<cont_Movistar<<endl;
    cout<<" "<<endl;
    
    cout<<" Claro: "<<cont_Claro<<endl;
    cout<<" "<<endl;
    
    cout<<" Otro operador: "<<cont_otroOper<<endl;
    cout<<" "<<endl;
    
    
//Autor
    cout<<" "<<endl;
    cout<<"      Por: Alejandro Sacristan Leal"<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    
    return 0;
}//Fin del main
