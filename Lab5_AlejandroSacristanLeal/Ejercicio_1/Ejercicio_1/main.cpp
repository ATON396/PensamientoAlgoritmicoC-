//
//  main.cpp
//  Ejercicio_1
//
//  Created by Alejandro Sacristan Leal on 7/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>


using namespace std;

//Variables de entrada.
float uno_num=0, dos_num=0;
char repet='s',opcion='g';

//Variables de salida.
float add=0,subtract=0,multiply=0,divide=0;

//funciones de los procesos.
float sumaa(float f_number,float s_number);
float resta(float f_number,float s_number);
float divicion(float f_number,float s_number);
float multiplicacion(float f_number,float s_number);

int main() {
    
    do {
        cout<<"Hello this is the best calcultor"<<endl;
        cout<<" "<<endl;
        
        cout<<"Operations Menu: "<<endl;
        cout<<" "<<endl;
        
        cout<<"Add -> A "<<endl;
        cout<<"Subtract -> S"<<endl;
        cout<<"Multiply -> M "<<endl;
        cout<<"Divide -> D"<<endl;
        cout<<" "<<endl;
        
        cout<<"Write the numbers to operate"<<endl;
        cout<<" "<<endl;
        
        cout<<"Write first number: ";
        cin>>uno_num;
        cout<<" "<<endl;
        
        cout<<"Write Second number: ";
        cin>>dos_num;
        cout<<" "<<endl;
        
        cout<<"Now choose the letter corresponding to the operation: ";
        cin>>opcion;
        cout<<" "<<endl;
        
    //Control Sistem.
        
        //For case to add.
        if(opcion=='a'||opcion=='A'){
            add = sumaa(uno_num,dos_num);
            cout<<add<<endl;
        }
        
        //For case to Subtract.
        if(opcion=='s'||opcion=='S'){
            subtract = resta(uno_num,dos_num);
            cout<<subtract<<endl;
        }
        
        //For case to Multiply.
        if(opcion=='m'||opcion=='M'){
            multiply= multiplicacion(uno_num,dos_num);
            cout<<multiply<<endl;
        }
        
        //For case to Divide.
        if(opcion=='d'||opcion=='D'){
            divide = divicion(uno_num,dos_num);
            cout<<divide<<endl;
        }
        
        cout<<"Do you want to do more operations? Y/n: ";
        cin>>repet;
        cout<<" "<<endl;
        cout<<" "<<endl;
        
    } while (repet=='y'||repet=='y');
    
    
    return 0;
}

// Funciones.
float sumaa(float f_number,float s_number){
    float r=0;
    r = f_number + s_number;
    
    return r;
}
float resta(float f_number,float s_number){
    float r=0;
    r = f_number - s_number;
    
    return r;
}
float divicion(float f_number,float s_number){
    float r=0;
    r = f_number / s_number;
    
    return r;
}
float multiplicacion(float f_number,float s_number){
    float r=0;
    r = f_number * s_number;
    
    return r;
}
