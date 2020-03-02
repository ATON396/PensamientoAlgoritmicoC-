//
//  main.cpp
//  Ejercicio_9
//
//  Created by Alejandro Sacristan Leal on 16/02/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

//Variables
float d_anita=0,total_A=0,total_B=0,total_C=0,total=0, m_descuadre =0, mes_total_A=0, mes_total_B=0,mes_total_Tiket=0, mes_total_C=0,porcentaje_A=0,porcentaje_B=0,porcentaje_C,sumatoria_tikets=0,dia_total=0;
int cont_A=0,cont_B=0,cont_C=0,cont_dia=0, cont_descuadre=0, m_descuadre_dia=0,M_cont_A=0,M_cont_B=0,M_cont_C=0;
char go='y',clase='o',ndia='n';

int main() {
   
    cout<<"Programa que cuadra caja dia a dia"<<endl;
    cout<<" "<<endl;
    
   
while(ndia=='n' || ndia=='N' ){
    
    dia_total=0;
    cont_A=0;
    cont_B=0;
    cont_C=0;
    total_A=0;
    total_B=0;
    total_C=0;
    
    cout<<"Bienvenido a un nuevo dia! "<<cont_dia+1<<" Del mes"<<endl;
    cout<<" "<<endl;
    
    cout<<"Dijita el dinero total recogido el dia "<<cont_dia+1<<" : "<<endl;
    cin>>d_anita;
    cout<<" "<<endl;
    
    while (go=='Y'|| go=='y') {
        
        cout<<"Dijita la Clase de tiquetes en MAYUSCULAS (A,B,C): "<<endl;
        cout<<" "<<endl;
        
        cout<<"¿De que Clase?: "<<endl;
        cin>>clase;
        cout<<" "<<endl;
        
        switch (clase) {
            case 'A':
                cont_A++;
                total_A= cont_A*5000;
                
                break;
            case 'B':
                cont_B++;
                total_B= cont_B*7500;
                
                break;
                
            case 'C':
                cont_C++;
                total_C= cont_C*18000;
            
                break;
                
            default:
                cout<<" Solo se admite tiquetes clase A,B,C o D para salir"<<endl;
                cout<<" "<<endl;
                break;
        
        }//Fin swithch
        
        // Total de dinero en tikest
        total= total_A + total_B + total_C;
        dia_total= total;
        
        //Cuenta a nivel mensual
        M_cont_A += cont_A;
        M_cont_B += cont_B;
        M_cont_C += cont_C;
        
               mes_total_A = (M_cont_A*5000);
               mes_total_B = (M_cont_B*7500);
               mes_total_C = (M_cont_C*1800);
               mes_total_Tiket=mes_total_A+mes_total_B+mes_total_C;
               
               //Promedio de tikets
               sumatoria_tikets = cont_A + cont_B + cont_C;
               porcentaje_A = (cont_A*100)/sumatoria_tikets;
               porcentaje_B = (cont_B*100)/sumatoria_tikets;
               porcentaje_C = (cont_C*100)/sumatoria_tikets;
        
        cout<<"Selecciona Y para continuar ingresando Tikets para este dia o D para salir: "<<endl;
        cin>>go;
        cout<<" "<<endl;
        
            if(dia_total == d_anita){
             
                cout<<"Exelente un cierre de caja exitoso :"<<endl;
                cout<<" "<<endl;
            }else{
            
                // contador para descuadres de cuenta
               // cont_descuadre++;
                
                if(total > d_anita){
                    
                    cout<<"--- Errorr descuadre de caja te Falta: $"<<dia_total - d_anita<<endl;
                    cout<<" "<<endl;
                    
                    if (dia_total - d_anita> m_descuadre){
                        //El mayor decuadre de sobrante
                        m_descuadre_dia = cont_dia+1;
                        m_descuadre = (dia_total - d_anita);
                                      
                       }
                    
                }else{
                    if(dia_total < d_anita){
                        
                        cout<<"-- Errorr descuadre de caja Te sobra dinero o te Faltan TIKETS: $"<<d_anita-dia_total<<endl;
                        cout<<" "<<endl;
                        
                        if (d_anita - dia_total> m_descuadre){
                            //El mayor decuadre que falta
                            m_descuadre_dia = cont_dia+1;
                            m_descuadre = (d_anita - dia_total);
                            
                        }
                 }
            }
        }
       
}//Fin while Voletas
    
    
    cont_dia++;
    go='Y';
    cout<<"Dijita N si deseas poner los datos de otro dia o D para Salir de todo: "<<endl;
    cin>>ndia;
    cout<<" "<<endl;
  
 }// Fin while dias
 
    if(cont_dia < 30){
        
        cout<<"El dia con mayor descuadre fue el : "<<m_descuadre_dia<<" De "<<cont_dia<<" dias registrados con un valor de : $"<<m_descuadre<<" ya sea afavor o encontra"<<endl;
        cout<<" "<<endl;
             
             cout<<"El total vendido en Tikets fue: $"<<mes_total_Tiket<<" y por cada Tikets fue: "<<endl;
             cout<<" "<<endl;
             cout<<"Tiqute A: $"<<mes_total_A<<endl;
             cout<<"Es el: %"<<porcentaje_A<<" de las ventas totales"<<endl;
             cout<<" "<<endl;
             
             cout<<"Tiqute B: $"<<mes_total_B<<endl;
             cout<<"Es el: %"<<porcentaje_B<<" de las ventas totales"<<endl;
             cout<<" "<<endl;
             
             cout<<"Tiqute C: $"<<mes_total_C<<endl;
             cout<<"Es el: %"<<porcentaje_C<<" de las ventas totales"<<endl;
             cout<<" "<<endl;
             cout<<" "<<endl;
             
             cout<<"No has completado tu mes aun te faltan mas datos para poderte entregar toda la informacion respectiva a un mes. Regresa con mas informacion"<<endl;
             cout<<" "<<endl;
             
     }else{
         
         if(cont_dia==31 || cont_dia==30){
             
             cout<<"El dia con mayor descuadre fue el : "<<m_descuadre_dia<<" De "<<cont_dia<<" dias registrados con un valor de : $"<<m_descuadre<<" ya sea afavor o encontra"<<endl;
             cout<<" "<<endl;
             
              cout<<"El total vendido fue: $"<<mes_total_Tiket<<" y por cada tiquete fue: "<<endl;
              cout<<" "<<endl;
              cout<<"Tiqute A: $"<<mes_total_A<<endl;
              cout<<"Es el: %"<<porcentaje_A<<" de las ventas totales"<<endl;
              cout<<" "<<endl;
              
              cout<<"Tiqute B: $"<<mes_total_B<<endl;
              cout<<"Es el: %"<<porcentaje_B<<" de las ventas totales"<<endl;
              cout<<" "<<endl;
              
              cout<<"Tiqute C: $"<<mes_total_C<<endl;
              cout<<"Es el: %"<<porcentaje_C<<" de las ventas totales"<<endl;
              cout<<" "<<endl;
              cout<<" "<<endl;
             
             cout<<"Haz terminado tu mes no puedes ingresar mas datos a este mes por que esta completo. Te recomiendo iniciar otro desde 0"<<endl;
             cout<<" "<<endl;
             cout<<"Analiza los resultados de tu mes finalizado: "<<endl;
             cout<<" "<<endl;
             
         }
    
     }
    
    return 0;
}
