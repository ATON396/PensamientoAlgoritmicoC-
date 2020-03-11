//
//  main.cpp
//  Ejercicio_8
//
//  Created by Alejandro Sacristan Leal on 8/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

int realNumber(float rNumber);

int realNumber(float rNumber){
    
    int r =0;
    
    if(rNumber==0){
        
        r= 0;
        
        return r;
    }
    if(rNumber<0){
        
        r= -1;
        
        return r;
    }
    if(rNumber>0){
        
        r= 1;
        
        return r;
    }
    
    return 396;
}

int main() {
    
    float rNumber=0;
    int func=0;
    
    cout<<"Dijita un numero Real: ";
    cin>>rNumber;
    func= realNumber(rNumber);
    cout<<" "<<endl;
    cout<<func<<endl;
    cout<<" "<<endl;
    
    
    return 0;
}
