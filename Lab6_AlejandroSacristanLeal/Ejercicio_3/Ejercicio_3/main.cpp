//
//  main.cpp
//  Ejercicio_3
//
//  Created by Alejandro Sacristan Leal on 25/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//
/*
 Elabore un programa que determine
 el promedio de los números que se
 encuentran dentro de un arreglo.
 */

#include <iostream>

using namespace std;

int main() {
   
    int sice=5;
    int count=0;
    int promedio=0;
    cout<<"Ingresa El tamaño del Vector: ";
    cin>>sice;
    cout<<" "<<endl;
    
    int vector[sice];
    
    for (int i=0;i<sice;i++)
    {
        cout<<"Ingresa Valores al Vector: ";
        cin>>vector[i];
        cout<<" "<<endl;
        
        count= vector[i]+ count;
        
    }
    cout<<"Respuesta: "<<endl;
    cout<<" "<<endl;
    cout<<"Sumatoria del Vector: "<<count<<endl;
    promedio= count/sice;
    cout<<"Promedio del Vector: "<<promedio<<endl;
    cout<<" "<<endl;
    
    
    return 0;
}
