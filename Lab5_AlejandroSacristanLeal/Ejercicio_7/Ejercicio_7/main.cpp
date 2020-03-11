//
//  main.cpp
//  Ejercicio_7
//
//  Created by thot on 8/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

float promedio();

float resul_def=0;

//Funcion del promedio
float promedio(){
     
    float nota=0,prome=0,def=0;
    
    for(int i=1; i<=3; i++){
        
        cout<<"Nota "<<i<<": ";
        cin>>nota;
        cout<<" "<<endl;
        
        prome +=nota;
        
    }
    
    def = (prome/15)*5;
    
    return def;
}//fin de la funcion

//Inicio funcion principal
int main(){
    
    float meta=2.94;
    
    cout<<"Nota final del Curso"<<endl;
    cout<<" "<<endl;
  
    resul_def = promedio();

    if(resul_def<=meta/*2.94000006*/){
        cout<<"Repetir Curso --> Nota: "<<resul_def<<endl;
    }
    if(resul_def>meta/*2.94000006*/){
        cout<<"Aprobo Curso --> Nota: "<<resul_def<<endl;
    }
    
    cout<<" "<<endl;
    
    return 0;
}


