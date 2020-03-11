//
//  main.cpp
//  Ejercicio_4
//
//  Created by Alejandro Sacristan Leal on 8/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

float precio=0,descuento=0, valor_p=0;

float desc(int precio,int valor_p);

int main() {
    
    cout<<"¿Deseas saber de cuanto fue tu descuento?"<<endl;
    cout<<" "<<endl;
    cout<<"Ingresa el precio del producto: ";
    cin>>precio;
    cout<<" "<<endl;
    cout<<"Ingresa el valor que pagaste por el producto: ";
    cin>>valor_p;
    cout<<" "<<endl;
    
    descuento= desc(precio,valor_p);
    cout<<"Respuesta: "<<endl;
    cout<<"Obtuviste un descuento de: "<<descuento<<"%"<<endl;
    cout<<" "<<endl;
    
    return 0;
}

float desc(int precio, int valor_p){
    
    float r=0,Des=0;
    
    
    Des = precio-valor_p;
    r=(precio/Des);
    
    return r;
}
