//
//  main.cpp
//  Ejercicio_6
//
//  Created by Alejandro Sacristan Leal on 8/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

float dijsuma(int numero);

int main() {
   
    int numero=0;
    float result=0;
    
    cout<<"Dijita un numero: ";
    cin>>numero;
    cout<<" "<<endl;
    
    result = dijsuma(numero);
    
    cout<<result<<endl;
    
    return 0;
}

float dijsuma(int numero){
    
    int a=0,sum=0;
    
    while (numero!=0){
        
        a= numero %10;
        numero= numero/10;
        sum += a;
    
    }
        
    return sum;
}
