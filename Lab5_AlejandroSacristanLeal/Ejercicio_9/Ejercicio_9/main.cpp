//
//  main.cpp
//  Ejercicio_9
//
//  Created by Alejandro Sacristan Leal on 9/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

int primos(int rnumber);
int next(int primo);


int main() {
    
    int rnumber=0,funPrimo=0,funNext=0;
    
    cout<<"Dijta un numero primo: ";
    cin>>rnumber;
    
    if (rnumber>1){
        
        funPrimo= primos(rnumber);
        funNext= next(funPrimo);
        cout<<"El siguiente primo es: "<<funNext<<endl;
        
    }
    if(rnumber<=1){
        cout<<"No puede ser menor o igual a 0 1"<<endl;
    }
    
    
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
    
    if(primo!=rnumber){
        cout<<rnumber<<" No es primo Intenta con uno primo"<<endl;
    }
    return primo;
}

/*Funcion que se alimenta de la funcion primos
 para allar el siguiente primo*/

int next(int primo){
    
    int contador=0,next=0,lim=0,inicio=0;
    
    inicio=primo+1;
    
    lim = primo*4;
    
    for(int i=inicio;i<=lim;i++){
        
        for(int j=1;i>=j;j++){
            
            if(i%j==0){
                contador++;
            }
        }
        if(contador==2){
            
            next=i;
            i=lim;
            contador=0;
            
        }else contador=0;
    }
    
    return next;
}
