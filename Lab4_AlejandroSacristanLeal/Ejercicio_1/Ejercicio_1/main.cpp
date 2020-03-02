//
//  main.cpp
//  Ejercicio_1
//
//  Created by Alejandro Sacristan Leal on 22/02/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

int a=0;

int main() {
    
    for(int i=0;i<=10;i++){
        
        cout<<"La tabla del: "<<i<<endl;
        
        for(int j=1;j<=10;j++){
            
            a =  i*j;
            
             cout<<" "<<i<<" * "<<j<<" : "<<a<<endl;
            
        }

        cout<<" "<<endl;
    }
    
    cout<<" "<<endl;
    
    return 0;
}
