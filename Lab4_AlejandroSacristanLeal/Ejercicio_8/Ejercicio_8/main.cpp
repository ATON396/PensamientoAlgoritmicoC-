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
float p_base_A=0,p_base_B=0,p_base_C=0,fecha=0,inflacion_B=0,inflacion_C=0,n_Veiculos=0,impuesto_Anterior=0,total=0,impuesto_Actual=0,n_mayor=0,n_menor=0, total_secretaria=0;
int cedula=0,cedula_m=0,cedula_p=0;
string combustible="G", contribuyente="S", categoria="O", nombre=" ",placa=" ",año_impuesto="N";

//inicio del programa.
int main() {
    
    //Ciclo controlador de contrubuyentes
    while (contribuyente == "S"|| contribuyente =="s") {
        
        //Presentacion del programa e ingreso de informacion del contrubuyente y Gobierno.
        cout<<" "<<endl;
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
            
            cout<<"Este es tu primer año de impuestos para el ( "<<placa<<" ) S/n ?: ";
            cin>>año_impuesto;
            cout<<" "<<endl;
            
            // si no es el primer año de pago de impuestos.
            if(año_impuesto!="s"||año_impuesto!="S"){
                
                cout<<"¿Cuanto fue el impuesto anterior para el veiculo( "<<placa<<" )?: ";
                cin>>impuesto_Anterior;
                cout<<" "<<endl;
            }
        //  FIN de los cin y cout para el usuario por veiculo.
            
        // Inicio de Condicionales para cada categoria de veiculos.
                
        // Se incrementa el precio base en 3% para las categorias B Y C.
          if(categoria=="C"||categoria=="c"){
                    
               impuesto_Actual = p_base_C + (p_base_C *0.03);
              
          } else if(categoria=="B"||categoria=="b"){
                        
                impuesto_Actual= p_base_B + (p_base_B *0.03);
              
           } else if (categoria=="A"||categoria=="a"){
                    
                impuesto_Actual = p_base_A;
               
           }else{
               
               cout<<" Debes Elegir una categoria valida (A,B,C) "<<endl;
           }
            
        // Se disminuye el precio base en 5% O Descuento por E o fecha > 2014.
            if ((combustible=="E"||combustible=="e")||fecha>2014){
                
                if(categoria=="A"||categoria=="a"){
                    
                    impuesto_Actual = p_base_A - (p_base_A *0.05);
                    
                }else if(categoria=="B"||categoria=="b"){
                    
                    impuesto_Actual = p_base_B - (p_base_B *0.05);
                    
                }else if (categoria=="C"||categoria=="c"){
                    
                    impuesto_Actual = p_base_C - (p_base_C *0.05);
                }
                
            }else{
                cout<<" No tienes descuento del 5% ya que usas Gasolina(G) o tu carro es muy antiguo antes de 2014. "<<endl;
            }
           
            // Si el impuesto actual es mayor que el anerior.
            if ((impuesto_Anterior<impuesto_Actual) && (año_impuesto!="s"||año_impuesto!="S")){
                
                //Categorias
                if ((categoria=="C"||categoria=="c")||(categoria=="B"||categoria=="b")){
                    
                    impuesto_Actual = impuesto_Anterior + (impuesto_Anterior * 0.03);
                    
                }else{
                    if(categoria=="A"||categoria=="a"){
                        
                        impuesto_Actual = impuesto_Anterior;
                        
                    }
                }
            }
            //Fin de las condicionles.
            
            //Mensaje por pantall del impuesto  pagar por ese carro.
            cout<<" "<<endl;
            cout<<nombre<<" Cc: "<<cedula<<" Debes pagar la suma Total de $"<<impuesto_Actual<<" Por el veiculo de placa: "<<placa<<endl;
            cout<<" "<<endl;
           
            // Sumadores de cuentas
            total = total + impuesto_Actual;
            total_secretaria = total_secretaria + total;
            
            // Reinicio de sumador para el siguiente viculo
            impuesto_Actual =0;
        }// Fin del for para el Numero de Veiculos y variables. [Informacion por cada veiculo].
        
        cout<<"Estimado Contribuyente: "<<endl;
        cout<<nombre<<" con cedula: "<<cedula<<" Debes pagar la suma Total de $"<<total<<" por los veiculos incritos "<<endl;
        cout<<" "<<endl;
        
        //El mayor Contribuyente
        if(total>n_mayor){
            n_mayor = total;
            cedula_m = cedula;
        }else{
            if(total<n_menor){
                n_menor=total;
                cedula_p = cedula;
            }
        }
        
        //Reiniciamos total para el siguiente Contribuyente si lo hay.
        total =0;
        
        //Pregunta para la union de otro contribuyente
        cout<<"¿Desa añadir a otro contribuyente? S/n:  ";
        cin>>contribuyente;
        
    }// Fin del While de Contrubuyente y Gobierno. [Informacion por contribuyente y Gobierno].
    cout<<" "<<endl;
    cout<<"La secretaria hacienda ha recojido un total de: $ "<<total_secretaria<<endl;
    cout<<" "<<endl;
    cout<<"El contribuyente con mas aportes fue:  "<<cedula_m<<endl;
    cout<<" "<<endl;
    
    return 0;
}
