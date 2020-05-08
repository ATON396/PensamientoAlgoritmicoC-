//
//  main.cpp
//  Ejercicio_5
//
//  Created by Alejandro Sacristan Leal on 30/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//
/*
 
 Elabore un programa que determine
 los números repetidos en un arreglo
 de enteros positivos
 
 */

#include <iostream>

using namespace std;

int main() {
    
    //Agregar tamaño a un vector
    int sice=1;
    int vector[sice];
    int valuVector=0;
    int valu=0;
    int aux=0;
 
   
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
       
        //Evalua si el valor ngresado es positivo
        if(valu>0)
        {
            //Crea dos copias del mismo vector
            vector[i] ={valu};
            
            
        }else{
            
            cout<<"Debes ingresar solo numeros positivos "<<endl;
            cout<<" "<<endl;
            
        }
    }
    
    /*Ordenar Vector Original de manera acendente usando Burbuja*/
    for(int pass=1;pass<=sice-1;pass++)//passes
        {
           for(int i=0;i<=sice-2;i++)//one pass
           {
               if(vector[i]>vector[i+1])//one comparison
               {
                   aux=vector[i];
                   vector[i]=vector[i+1];
                   vector[i+1]=aux;
               }
               
               
           }
        }
    /*
     Note:
     The vector vector[SIZE] now is reorganizate data
     */
    
    //Recorrer un vector compara con vector dos +1 en su posición
    cout<<"Valores Repetidos en el Vector: ";
  
   for(int i=0; i<sice; i++)
   {
       if(vector[i]==vector[i+1])
       {
           cout<<" "<<vector[i];
           
       }

   }
   
    cout<<" "<<endl;
  
    return 0;
}
