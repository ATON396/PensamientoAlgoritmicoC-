//
//  main.cpp
//  Ejercicio_6
//
//  Created by Alejandro Sacristan Leal on 30/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//
/*
 
 Elabore un programa que determine
 la posición del elemento mayor de
 un arreglo.
 
 */

#include <iostream>

using namespace std;

int main() {

    //Agregar tamaño a un vector
    int sice=1;
    int vector[sice];
    int valuVector=0;
    int valu=0;
    int Mnumber=0;
    int posicion=0;
    
    
      
           cout<<"Ingresa un tamaño al vector: ";
           cin>>sice;
           cout<<" "<<endl;
           sice=sice;
           valuVector= vector[sice];
           

       
       //Agregar valor a un espacio vectorial
       for(int i=0; i<sice; i++)
       {
           cout<<"Ingresa un valor al espacio del vector: ";
           cin>>valu;
           cout<<" "<<endl;
           valu=valu;
           //Crea dos copias del mismo vector
           vector[i] ={valu};
           if(Mnumber<vector[i])
           {
               Mnumber=vector[i];
               posicion=i;
           }
           
       }
       
      
cout<<"Valor Mayor del Vector: "<<Mnumber<<" "<<"Posicion "<<posicion<<endl;
cout<<" "<<endl;
    
    
    
    
    return 0;
}
