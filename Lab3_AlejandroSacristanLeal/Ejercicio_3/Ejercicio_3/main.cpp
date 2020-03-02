//
//  main.cpp
//  Ejercicio_3
//
//  Created by Alejandro Sacristan Leal on 12/02/20.
//  Copyright © 2020 aslbank. All rights reserved.
//

#include <iostream>

using namespace std;


//Variables
float n_Final = 0, sumador = 1;

int main() {
    // insert code here...
    cout<<"Dijita el numero hasta donde quieres conocer el factorial: "<<endl;
    cin>>n_Final;
    
    for (float i = 1 ; i<= n_Final; i++){
 
        sumador  = sumador * i;
       
    }
    
    cout<<" "<<endl;
    cout<<"Total del factorial "<<sumador<<endl;
    cout<<" "<<endl;
    return 0;
}

