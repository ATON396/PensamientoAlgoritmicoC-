//
//  main.cpp
//  Ejercicio_8
//
//  Created by Alejandro Sacristan Leal on 23/02/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

//Variables neseasarias para el programa.
float p_base_A=0,p_base_B=0,p_base_C=0,fecha=0,inflacion_B=0,inflacion_C=0,n_Veiculos=0,impuesto_Anterior=0,total=0,impuesto_Actual=0;
int cedula=0;
string combustible="G", contribuyente="S", categoria="O", nombre=" ",placa=" ";

//inicio del programa.
int main() {
    
    //Ciclo controlador de contrubuyentes
    while (contribuyente == "S"|| contribuyente =="s") {
        
        //Presentacion del programa e ingreso de informacion del contrubuyente y Gobierno.
        cout<<"Buen dia Estimado Contribuyente "<<endl;
        cout<<" "<<endl;
        cout<<"¿Cual es tu nombre: ";
        cin>>nombre;
        cout<<" "<<endl;
        cout<<"¿Cual es tu numero de Cc: ";
        cin>>cedula;
        cout<<" "<<endl;
        
        cout<<nombre<<" Porfavor dijita el precio base dado por el gobierno para las:  "<<endl;
        cout<<" "<<endl;
        
        cout<<"Categorias: "<<endl;
        cout<<" "<<endl;
        
        cout<<"A -> AutoMovil: $ ";
        cin>>p_base_A;
        cout<<" "<<endl;
        
        cout<<"B -> Buss: $ ";
        cin>>p_base_B;
        cout<<" "<<endl;
        cout<<"C -> Camion: $ ";
        cin>>p_base_C;
        cout<<" "<<endl;
        
        cout<<nombre<<" ahora dijita la cantidad de veiculos que tiene: ";
        cin>>n_Veiculos;
        cout<<" "<<endl;
      
        //Iteraciones para agregar informacion sobre Veiculos
        for(int i=1;i<=n_Veiculos;i++){
            
            cout<<"Veiculo numero: "<<i<<endl;
            cout<<" "<<endl;
            
            cout<<"Placa del Veiculo: "<<endl;
            cin>>placa;
            cout<<" "<<endl;
            
            cout<<"Categorias: "<<endl;
            cout<<" "<<endl;
            cout<<"A -> AutoMovil "<<endl;
            cout<<"B -> Buss "<<endl;
            cout<<"C -> Camion "<<endl;
            cout<<" "<<endl;
            
            cout<<"¿Cual es la categoria para el("<<placa<<") (A, B, C): ";
            cin>>categoria;
            cout<<" "<<endl;
            
            cout<<"¿Que combustible usa el( "<<placa<<" ) ? Gasolina/Diseel(G) o Electrico(E): ";
            cin>>combustible;
            cout<<" "<<endl;
            
            cout<<"¿De que año es el veiculo( "<<placa<<" ) ?: ";
            cin>>fecha;
            cout<<" "<<endl;
            
            cout<<"¿Cuanto fue el impuesto anterior para el veiculo( "<<placa<<" )?: ";
            cin>>impuesto_Anterior;
            cout<<" "<<endl;
            //  FIN de los cin y cout para el usuario por veiculo.
            
        // Inicio de Condicionales para cada categoria de veiculos.
            if (categoria=="A"||categoria=="a"){}
            if (combustible=="E"||combustible=="e"){}
            if (fecha>=2014){}
            if (impuesto_Anterior>impuesto_Actual){}
            
        
        }// Fin del for para el Numero de Veiculos y variables. [Informacion por cada veiculo].
        
        
    }// Fin del While de Contrubuyente y Gobierno. [Informacion por contribuyente y Gobierno].
    
    return 0;
}
