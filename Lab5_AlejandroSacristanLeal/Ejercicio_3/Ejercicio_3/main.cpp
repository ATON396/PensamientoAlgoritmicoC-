//
//  main.cpp
//  Ejercicio_3
//
//  Created Alejandro Sacristan Leal thot on 7/03/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

//Function Create.

float salary(float base_Price, int hlegal , int hours);

int main() {
    
    //Vriables
    float base_Price =0 ;
    int hours =0,hlegal=40 ;
    float solution = 0;
   
    //User Interactions.
    cout<<"Extra hours for workers Program"<<endl;
    cout<<" "<<endl;
    
    cout<<"Enter the price per hour: $";
    cin>>base_Price;
    cout<<" "<<endl;
    
    cout<<"Enter the total hours worked: H";
    cin>>hours;
    cout<<" "<<endl;
    
    //Control sistem.
    
    // Function Call.
    solution = salary(base_Price,hlegal,hours);

    cout<<"You salari is $"<<solution<<endl;
    return 0;
}

float salary(float base_Price, int hlegal , int hours){
    
    float r =0,subtract=0;
    
    // For +25% in the extra hours.
    if(hours>hlegal){
        
        subtract= hours-hlegal;
        r =  ((hours-subtract)* base_Price) /*Legal*/+/*Bonus*/ (subtract * (base_Price +(base_Price *0.25)));
        
    // For 40Hourss
    }else{
        
        r =/*Legal*/ hours * base_Price;
    }
    
   return r;
}
