//
//  main.cpp
//  Ejercicio_2
//
//  Created by Aton Code on 5/10/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

int main() {
    
       float maximo[5], max=0;

       int x=0;

       printf("Ingrese 5 valores para determinar el numero maximo\n");

    

       for (int i = 1; i <= 5; i++){

    

           printf("valor %d\n",i);

           scanf("%f",&maximo[i]);

    

           if(maximo[i] > max){

               max = maximo[i];

               x = i;

           }

    

       }

    

       printf("El numero maximo es: %.2f\n y fue el numero %d en ser ingresado",max,x);
   
    return 0;
}
