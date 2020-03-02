//
//  main.cpp
//  Ejercicio_5
//
//  Created by Alejandro Sacristan Leal on 12/02/20.
//  Copyright © 2020 aslbank. All rights reserved.
//
// Evaluacion de numeros en terminal
#include <iostream>

using namespace std;

float n_mayor = 0, n_menor = 0,cont_uno = 0;
float total = 0,suma = 0, cont_dos = 0,n = 0;

int main() {
    
    for (int i = 1;i<=10;i++){
        
        cout<<"Ingresa un numero: "<<endl;
        cin>>n;
        
        if (n!=0){
    
            if(i==1){
                n_mayor = n;
                n_menor = n;
            }
            if(i>0 && i<=10){
                if(n_mayor<n){
                
                    n_mayor = n;
                
                }
                if(n_menor>n){
                
                    n_menor = n;
                }
                if(n<0){
                    cont_uno++;

                }
                if(n>0){
                    cont_dos++;
                    suma = suma + n;
                    total = suma/cont_dos;
                }
        }
            
    }
    else{
        
      //  i = 11;
        i-=1;
            cout<<" "<<endl;
            cout<<"!!Alerta Tu numero debe ser diferente de 0¡¡"<<endl;
            cout<<" "<<endl;
        
        }
}
    cout<<" "<<endl;
    cout<<"Numero Mayor de grupo: "<<n_mayor<<endl;
    cout<<" "<<endl;

    cout<<"Numero menor de grupo: "<<n_menor<<endl;
    cout<<" "<<endl;
    
    cout<<"Cantidad de Numero negativos de grupo: "<<cont_uno<<endl;
    cout<<" "<<endl;
    
    cout<<"Promedio de los Numeros Positivos Encontrados en el Grupo: "<<total<<endl;
    cout<<" "<<endl;
    
    cout<<" "<<endl;
    cout<<"      Por: Alejandro Sacristan Leal"<<endl;
    
    return 0;
}
