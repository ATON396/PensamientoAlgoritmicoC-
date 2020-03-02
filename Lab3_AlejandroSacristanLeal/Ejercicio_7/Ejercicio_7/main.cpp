//
//  main.cpp
//  Ejercicio_7
//
//  Created by Alejandro Sacristan Leal on 17/02/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

//Variables
int n_estudiantes=0, m_asignaturas=0,code_estudiante=0,code_asignaturas=0, aprov_creditos=0, noaprov_creditos=0,code_buscar=0,total_creditos=0;
string nombre_estuduante="Nombre";
char buscar='y';
float promedio=0, n_creditos_dos=0,nota_dos=0,nota_uno=0,n_creditos=0;

int main() {
   
    //Estudiantes registrados.
    code_estudiante = 9090;
    nombre_estuduante = "Alejandro Sacristán Leal";
    code_asignaturas=2044;
    code_asignaturas=6396;
    n_creditos = 3;
    n_creditos_dos=3;
    total_creditos = n_creditos_dos+n_creditos;
    aprov_creditos=6;
    noaprov_creditos=0;
    m_asignaturas=2;
    nota_uno=5;
    nota_dos=4;
    promedio = ((nota_uno*n_creditos)+(nota_dos*n_creditos_dos))/total_creditos;
    
    
    //Buscador de eastudiante registrado.
    
    while (buscar =='y') {
        
        cout<<"Unico usiario registrado es el codigo 9090 "<<endl;
        cout<<" "<<endl;
        cout<<"Djite el codigo del estudiante que dese buscar: "<<endl;
        cin>>code_buscar;
        
        if(code_buscar == code_estudiante ){
            
            cout<<" "<<endl;
            cout<<"Nombre: "<<nombre_estuduante<<" numero de asignaturas inscritas: "<<m_asignaturas<<" Numero decreditos incritos: "<<total_creditos<<" Numero de creditos aprovados: "<<aprov_creditos<<" numeros de creditos no aprovados: "<<noaprov_creditos<< " Promedio: "<<promedio<<endl;
            cout<<" "<<endl;
            
        }else{
            
            cout<<" "<<endl;
            cout<<" El usuario no existe en el sistema"<<endl;
            cout<<" "<<endl;
            
        }
        
        cout<<"Dijita 'y' para buscar otra vez de lo contrerio 'n': ";
        cin>>buscar;
        cout<<" "<<endl;
    }
    
    return 0;
}
