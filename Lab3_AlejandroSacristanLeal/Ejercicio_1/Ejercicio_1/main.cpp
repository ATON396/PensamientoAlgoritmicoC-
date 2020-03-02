//
//  main.cpp
//  Ejercicio_1
//
//  Created by Alejandro Sacristan Leal on 12/02/20.
//  Copyright © 2020 aslbank. All rights reserved.
//

#include <iostream>

using namespace std;

int contador_1 = 0, contador_2 = 0;

int main() {
    // insert code here...
    for (int i = 1; i<= 200; i++){

        
        if (i % 3 == 0){
            
            cout<<"Multiplo de tres: "<<i<<endl;
            contador_1++;

        }
        else{
            
             cout<<"No lo es: "<<i<<endl;
            contador_2++;
        }
        
        cout<<"Hay: "<<contador_1<<" Multiplos de 3 y "<<contador_2<<" no lo son"<<endl;
        
    }
    return 0;
}
