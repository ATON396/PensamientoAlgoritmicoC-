//
//  main.cpp
//  Ejercicio_7
//
//  Created by thot on 23/02/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

string carrera ="";

float definitiva=0, promedio=0, suma=0;

int main() {
    
        cout<<"Estudiantes de la carrera de: "<<endl;
        cin>>carrera;
        cout<<" "<<endl;
        
        for(int e=1; e<=20; e++){
            
            cout<<"  "<<endl;
            cout<<"Estudiante numero: "<<e<<"/20 de: "<<carrera<<endl;
            cout<<"  "<<endl;

            cout<<"Dijita las notas definitivas: "<<endl;
            cout<<"  "<<endl;
            
            for(int i=1;i<=5;i++ ){
                
                cout<<"Materia "<<i<<" : "<<endl;
                cin>>definitiva;
                cout<<"  "<<endl;
             
                suma = suma + definitiva;
                promedio =(suma)/5;

            }//materias
            
         cout<<"Rta: "<<endl;
         cout<<"El promedio del estudiante "<<e<<" es: "<< promedio<<endl;
         cout<<"____________________________________________________"<<endl;
         cout<<"  "<<endl;
         definitiva = 0;
         promedio =0;
         suma=0;
    
        }//grupo
        
        
        
        
        
        
    
    
    
    return 0;
}
