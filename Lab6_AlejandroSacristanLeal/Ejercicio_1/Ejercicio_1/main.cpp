//
//  main.cpp
//  Ejercicio_1
//
//  Created by Alejandro Sacristan Leal on 25/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    //Estipulo el tamño inicial del vector
    int sice=6;
    
    //Presentacion de programa
    cout<<"Print de datos del Vector"<<endl;
    cout<<" "<<endl;
    
    //Ingresa el tamaño de Vector
    cout<<"Ingresa el Tamaño del Vector: ";
    cin>>sice;
    cout<<" "<<endl;
    
    //Inicializo el vector
    int vector[sice];
    
    //Ciclo de repeticion para imprimir los  datos almacenados del vector
    for(int i=0;i<sice;i++){

    //Ingresa un valos a un espacio del vector
        cout<<"Ingresa el valor "<<i<<": "<<endl;
        cin>>vector[i];
        cout<<" "<<endl;
        
     //Imprime los datos almacenados del vector
        cout<<"Dato: "<<i<<" => "<<vector[i]<<endl;
        cout<<" "<<endl;
        cout<<"Vector de tamañano: "<<sice<<endl;
        cout<<" "<<endl;

    }
    cout<<"Fin. "<<endl;
  
    return 0;
}
