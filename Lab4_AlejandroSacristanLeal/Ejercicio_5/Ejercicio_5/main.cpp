//
//  main.cpp
//  Ejercicio_5
//
//  Created by Alejandro Sacristan Leal on 22/02/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

int n=200;
char s ='y';

int main() {
    
    
    
    while (s=='y') {
        
        if(n>100){
            cout<<"Ingresa un numero mayor a 100: "<<endl;
            cin>>n;
            cout<<" "<<endl;
            s='x';
        }
        
        if(n<=100){
            
            cout<<"¡¡¡¡Debes ingresar un numero mayor a 100!!! "<<endl;
            cout<<" "<<endl;
            cout<<"Ingresa un numero mayor a 100: "<<endl;
            cin>>n;
            cout<<" "<<endl;
            s='y';
        }
       
    }
    
    
    return 0;
}
