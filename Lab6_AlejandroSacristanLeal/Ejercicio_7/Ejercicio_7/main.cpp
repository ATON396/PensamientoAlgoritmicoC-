//
//  main.cpp
//  Ejercicio_7
//
//  Created by Alejandro Sacristan Leal on 30/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//
/*
 
 Dado un arreglo de entero,
 retornar dos arreglos con la
 cantidad de veces que se repite
 cada elemento dentro del arreglo.
 
 */
#include <iostream>
#define SIZE 10

using namespace std;

void frequency(int [],int [], int max);


int main() {

    int vector[SIZE]={5,7,7,2,1,2,5,7,1,3};
    int vectorOrdenado[SIZE];
    int vectorElementos[5];
    int vectorFrequency[10]={0};
    int aux=0;
    int max=0;
    int imax=0;
    
    //Añado un espacio
    cout<<" "<<endl;
   
 /*Imprime Contenido Vector Origen*/
    cout<<"Vector Origen:                   ";
    for(int i=0;i<=SIZE-1;i++)
    {
        cout<<vector[i]<<" ";
    }
    
cout<<" "<<endl;
cout<<" "<<endl;
    
    /*Ordenar Vector Original de manera acendente usando Burbuja*/
    for(int pass=1;pass<=SIZE-1;pass++)//passes
        {
           for(int i=0;i<=SIZE-2;i++)//one pass
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
    cout<<"Vector Origen en Orden Acedente: ";//answer
    for(int i=0;i<=SIZE-1;i++)//print answer
    {
        vectorOrdenado[i]=vector[i];
        cout<<vectorOrdenado[i]<<" ";
        
    }
        
    cout<<" "<<endl;
    cout<<" "<<endl;
    
    //Recorrer un vector compara con vector dos +1 en su posición
    cout<<"Elementos en el Vector Origen:   ";
    
    for(int i=0; i<SIZE; i++)
    {
        //Copio de vector origen a vector elementos solo los repetdos
        if(vectorOrdenado[i]==vectorOrdenado[i+1] || vectorOrdenado[i]==vectorOrdenado[i])
        {
            vectorElementos[i]=vectorOrdenado[i];
        }
        //Añado a vector Elementos los valores No repetidos del VectorOrigen
        //Imprimo VectorElementos
        if( vectorElementos[i]!=vectorOrdenado[i+1] && vectorElementos[i]==vectorOrdenado[i])
        {
           vectorElementos[i]=vectorOrdenado[i];
            cout<<vectorElementos[i]<<" ";
        }
        if(vectorElementos[i]>vectorOrdenado[i+1] || vectorElementos[i]>vectorOrdenado[i])
        {
            imax=vectorElementos[i];//Deveria ser 7 para este caso. 7 es el mayor de elementos
        }
       
         
       
    }
    max=imax;//Rango Maximo para sacar la frecuencia.Deveria ser 7 en este caso
  
    cout<<" "<<endl;
    cout<<" "<<endl;
    frequency(vectorFrequency, vectorElementos, max);
    cout<<" "<<endl;
    cout<<" "<<endl;
    
    
  return 0;
}
    
void frequency(int freq[],int answer[], int max)
{
    int rating, j, largest=0, modeValue =0;
    
    //Answer
    cout<<"Frequency:                      ";
    
    //Inicializando en 0
    for(rating=1;rating<=max;rating++)//
    {
       freq[rating]=0;
    }
    
    for(j=0;j<=SIZE-1;j++)
    {
       ++freq[answer[j]];
    }
    
    for(rating=1;rating<=max;rating++)//
    {
        //Con esto solo se imprimen la frecuancia de elementos que no tengan frecuencia 0
        if(freq[rating]!=0)
        {
           //cout<<"Element "<<rating<<" Freq"<<": "<<freq[rating]<<endl;
            cout<<" "<<freq[rating];
        }
        
        
    }
    
    for(rating=1;rating<=max;rating++)//
    {
        if(freq[rating]>largest)
        {
            largest=freq[rating];
            modeValue=rating;
        }
        
    }
    
}
/*
 
 Nota:
 Casi Muero.
 
 */


