//
//  main.cpp
//  Ejercicio_2
//
//  Created by Alejandro Sacristan Leal on 12/02/20.
//  Copyright © 2020 aslbank. All rights reserved.
//

#include <iostream>

using namespace std;


//Variables
float n_Final = 0, sumador = 0;

int main() {
    // insert code here...
    
    cout<<"Dijita el numero hasta donde quieres sumar: "<<endl;
    cin>>n_Final;
    
    for (float i = 1; i<= n_Final; i++){
 
        sumador = sumador + i;
    }
    
    cout<<" "<<endl;
    cout<<"Total de la Sumatoria: "<<sumador<<endl;
    cout<<" "<<endl;
    
    return 0;
}

