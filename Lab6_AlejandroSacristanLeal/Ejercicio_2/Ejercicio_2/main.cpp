//
//  main.cpp
//  Ejercicio_2
//
//  Created by Alejandro Sacristan Leal on 25/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//
/*Programa que Imprime los Numeros
Pares alamaceados en el Vector*/

#include <iostream>

using namespace std;

int main() {
    
    int sice=1;
    int countPar=0;
    
    cout<<"Ingresa el Tamaño del Vector: ";
    cin>>sice;
    cout<<" "<<endl;
    
    int vector[sice];
    
    for(int i = 0;i<sice;i++ )
    {
        cout<<"Ingresa el Valor para el espacio "<<i<<": ";
        cin>>vector[sice];
        cout<<" "<<endl;
        
        if(vector[sice]%2==0)
        {
            countPar++;
            cout<<"Dato ingresado en espacio "<<i<<": "<<endl<<vector[sice]<<" es Par "<<endl;
            cout<<" "<<endl;
        }
    }
    cout<<"Se almacenaron: "<<countPar<<" Numeros Pares"<<endl;
    cout<<" "<<endl;
    
    
    return 0;
}
