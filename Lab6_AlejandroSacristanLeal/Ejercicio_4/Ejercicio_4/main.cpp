//
//  main.cpp
//  Ejercicio_4
//
//  Created by Alejandro Sacristan Leal on 25/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//
/*
 Elabore un programa que determine
 la cantidad de números primos que
 se encuentran en un arreglo.
 */

#include <iostream>

using namespace std;


int primos(int rnumber);
int coutPrimos=0;
int numPrimos=0;

int main() {
   
    int sice=1;
    
  
    cout<<"Ingresa El tamaño del Vector: ";
    cin>>sice;
    cout<<" "<<endl;
    
    sice=sice;
    int vector[sice];
    
    for (int i=0;i<sice;i++)
    {
        cout<<"Ingresa Valores al Vector: ";
        cin>>vector[i];
        cout<<" "<<endl;
 
    }
    
    for (int i=0;i<sice;i++)
    {
        //Recorre el vector buscado numeros primos y los imprime
       numPrimos= primos(vector[i]);
        
           
    }
    cout<<" "<<endl;
    cout<<"Hay: "<<numPrimos<<" Numeros Primos en el Vector"<<endl;
    cout<<" "<<endl;

    return 0;
}

//Funcion para allar los primos
int primos(int rnumber){
    
    int contador=0,primo=0;
    
    for(int i=1;i<=rnumber;i++){
        
        for(int j=1;i>=j;j++){
            
            if(i%j==0){
                contador++;
            }
        }
        if(contador==2){
            
            if(i==rnumber){
                primo=i;
        
            }
            contador=0;
            
        }else contador=0;
    }
    
    if(primo!=rnumber || rnumber==0){
        cout<<rnumber<<" No es primo Intenta con uno primo!"<<endl;
    }else{
        coutPrimos++;
        cout<<primo<<" Es primo!"<<endl;
    }
    
    return coutPrimos;
}
