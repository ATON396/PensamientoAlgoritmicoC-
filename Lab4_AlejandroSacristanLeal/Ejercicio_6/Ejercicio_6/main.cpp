//
//  main.cpp
//  Ejercicio_6
//
//  Created by thot on 22/02/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

double suma=0,cuadrado=0;

int main() {
   
    for(int i=0; i<=100;i++){
        
       cuadrado= pow(i,2);
        
        suma= suma + cuadrado;
        
    }
    
    cout<<"La suma de los cuadrados de 0 a 100 es: "<<suma<<endl;
    
    return 0;
}
