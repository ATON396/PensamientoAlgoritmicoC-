//
//  main.cpp
//  Ejercicio_6
//
//  Created by Alejandro Sacristan Leal on 14/02/20.
//  Copyright © 2020 aslbank. All rights reserved.
//

#include <iostream>

using namespace std;
int in = 0, pot = 0, n = 1, conta = 1;

int main() {
    
    cout<<"Dijita el numero para realizar la secuancia: "<<endl;
    cin>>in;
    cout<<" "<<endl;
    cout<<"Secuencia: "<<endl;
    cout<<" "<<endl;

    for (int i = 0; i<in; i++){
        
        pot = n*n;
        
        for(int j = 0; j<conta; j++){
            cout<<pot<<" "<<endl;
        }
        n+=2;
        conta*=2;
    }
    cout<<" "<<endl;
    return 0;
}
