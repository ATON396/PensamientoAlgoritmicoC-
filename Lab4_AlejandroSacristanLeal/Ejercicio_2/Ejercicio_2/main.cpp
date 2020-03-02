//
//  main.cpp
//  Ejercicio_2
//
//  Created by Alejandro Sacristan Leal on 22/02/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

int n=0;

int a=0;

char x='S';

int main() {
    
 
while (x=='S'||x=='s' ){
        
        cout<<"Hola dijita la el numero de la tabla que deseas saber: "<<endl;
        cin>>n;
        cout<<" "<<endl;
        
        for(int i=n; i<=n; i++){
            
            cout<<"La tabla del: "<<i<<endl;
            
            for(int j=1;j<=10 ;j++){
                
                a =  i*j;
                
                cout<<" "<<i<<" * "<<j<<" : "<<a<<endl;
                
            }
           cout<<" "<<endl;
        }
        cout<<"Si deseas continuar buscando tablas dijita S, de lo contrario N."<<endl;
        cin>>x;
        cout<<" "<<endl;
        
    }
    
    return 0;
}
