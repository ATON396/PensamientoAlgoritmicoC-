//
//  main.cpp
//  Ejercicio_10_
//
//  Created by Alejandro Sacristan Leal on 10/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

//Funciones
int hijos(int nHijos);
int nuevoSalario(float salario);

int main(){
    
    int nEmpleados=1, childrens=0,funhijos=0,funNuevoSalario=0;
    float realSalary=0;
    char next='s',children='g';
    
    while (next=='S'||next=='s') {
        
        
        cout<<"The Emerald Bonus Salary"<<endl;
        cout<<" "<<endl;
        
        cout<<"For Worker "<<nEmpleados<<endl;
        cout<<" "<<endl;
        
        cout<<"Write your real salary: ";
        cin>>realSalary;
        cout<<" "<<endl;
        
        cout<<"Do you have children? S/n: ";
        cin>>children;
        cout<<" "<<endl;
        
        if(children=='s' || children=='S'){
            
            cout<<"How many children do you have: ";
            cin>>childrens;
            cout<<" "<<endl;
            
        }
     //Logica en la Funciones.
        
        funNuevoSalario= nuevoSalario(realSalary);
        funhijos= hijos(childrens);
        
       //Result
       
       cout<<"You New Salary: $"<<funNuevoSalario<<endl;
       cout<<" "<<endl;
        
       cout<<"You Subside: $"<<funhijos<<endl;
       cout<<" "<<endl;
        
       cout<<"Do you want continous add othe Worker S/n:";
       cin>>next;
       cout<<" "<<endl;
       cout<<" "<<endl;
        
        nEmpleados++;
        
    }//While end.
    
    return 0;
}

//Functions.
int hijos(int nHijos){
    
    int subsidio=0,totalSub=0,total=0,precio=400000;
    
    if(nHijos==1){
        
        totalSub=400000;
        
    }else{
        if(nHijos>1){
            
            for(int i=2;i<=nHijos;i++){
                
                if(i==2){
                    subsidio=400000;
                }
                
                subsidio = subsidio/2;
                total= total+subsidio;
                
            }//For end.
             totalSub= precio+total;
       }
    }
    
    return totalSub;
}


int nuevoSalario(float salario){
    
    float newSalary=0;
    
    if(salario>5000000){
        
        newSalary= salario +(salario*0.03);
        
    }else{
        if(salario>=2000000&&salario<=5000000){
            
            newSalary= salario +(salario*0.04);
            
        }else{
            if(salario<2000000){
                
                newSalary= salario +(salario*0.05);
                
            }
        }
    }//If end.
    
    return newSalary;
}


