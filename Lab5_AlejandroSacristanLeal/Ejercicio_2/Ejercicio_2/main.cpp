//
//  main.cpp
//  Ejercicio_2
//  Este Ejecicio es la trasformacion del Ejercicio_9 /lab2 Created by Alejandro Sacristan Leal on 9/02/20 a funciones.
//
//  Created by Alejandro Sacristan Leal on 7/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

// Variables
int año = 0;
bool entreCien = true, entreCuatro = true;

//Funcion_Año.
void añob(bool a,bool b, int año);

//Funcion principal
int main() {
    // Presentacion del programa al Usuario
    cout << "Programa que evalua si un año es bisiesto o no lo es. "<<endl;
    cout << " "<<endl;
    
    // Datos del usuarios que entran al programa
    cout << "Ingrese el año a evaluar: "<<endl;
    cin>>año;
    
    // Preparacion de los datos a comprar
    entreCien = año % 100;
    entreCuatro = año % 4;
    
    // Implementacion de la funcion Void
    añob(entreCuatro, entreCien, año);

    return 0;
    //Fin
}

//Funcion de año biciesto.
void añob(bool a,bool b, int año){
    
    // Proceso logico que realiza para evualuar si el año es bisisto o no.
    if (a == 0 && b == 0){
        
        //Retorna el reusltado si es bisisto.
        cout<<"El año "<<año<<" es bisiesto"<<endl;
    }
    else{
        if (a == 0 && b > 0 ){
           
            //Retorna el reusltado si es bisisto.
           
            cout<<"El año "<<año<<" es bisiesto"<<endl;
        }else{
            
            //Retorna el reusltado si no es bisisto.
            cout<<"El año "<<año<<" no es  bisiesto"<<endl;
        }
        
    }
}

