//
//  main.cpp
//  Ejercicio_4
//
//  Created by thot on 12/02/20.
//  Copyright © 2020 aslbank. All rights reserved.
//

#include <iostream>

using namespace std;


//Variables
int n_Final = 400, sumador_1 = 0, sumador_2 = 0, contadorP = 0, producto = 1;

int main() {
    // insert code here...
    
    cout<<"Todos los numeros Pares e Impares Hasta 400 "<<endl;
    
    for (int i = 20; i<= n_Final; i++){
 
        if (i % 2 == 0){
            sumador_1++;
            cout<<"Es par: "<<i<<endl;
            contadorP = contadorP + i;
            producto = producto * i;
            
            
        }
        else{
            sumador_2++;
            cout<<"No es par: "<<i<<endl;
        }
    }
    
    cout<<" "<<endl;
    cout<<"Hay: "<<sumador_1<<" numeros pares y "<<sumador_2<<" impares"<<endl;
    cout<<" "<<endl;
    cout<<"La suma de todos los pares es: "<<contadorP<<endl;
    cout<<" "<<endl;
    cout<<"El producto de todos los pares es: "<<producto<<endl;
    cout<<" "<<endl;

    
    return 0;
}

