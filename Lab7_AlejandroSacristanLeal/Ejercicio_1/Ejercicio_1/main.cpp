//
//  main.cpp
//  Ejercicio_1
//
//  Created by Alejandro Sacristan Leal on 5/4/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>

using namespace std;

//Fucion
void llenarMatrix(int score[4][5],string preguntas[4][1]);

int main() {
    
    //Marix
    int score[4][5];
    string preguntas[4][1];
    
    llenarMatrix(score,preguntas);

    return 0;
}

void llenarMatrix(int score[4][5], string preguntas[4][1])
{
    
    //Variable
    string name =" ";
    int s=0;
    
    //Encuesta
    preguntas[0][0]="¿Que tal la atencion de nuestros empleados?";
    preguntas[1][0]="¿Servimos comida de calidad?";
    preguntas[2][0]="¿Te parece justo el precio?";
    preguntas[3][0]="¿Que tal esta el lugar?";
  
    
    
    //Llenado la Matrix con la encuesta
    for(int c = 0; c < 5; c++)//Columbna
    {
        cout<<"º----------/"<<c+1<<"/----------º"<<endl;
        cout<<"Califica Nuestro Servicio"<<endl;
        cout<<" "<<endl;
        
        cout<<"!Hola! ¿Como te llamas?: ";
        cin>>name;
        cout<<" "<<endl;
        
        cout<<"!!Bienvenido "<<name<<"!!. Nos gustaria saber tu opinion"<<endl;
        cout<<" "<<endl;
        
        for(int f = 0; f < 4; f++)//Fila
        {
            cout<<preguntas[f][0]<<endl;
            cout<<" "<<endl;
            printf("%s","De 1 a 10 que tal fue: ");
            cin>>s;
            if(s <= 10 && s >= 1)
            {
               score[f][c]=s;
               cout<<" "<<endl;
                
            }else{cout<<"!!Ups recuerda que solo se puede de 1 a 10¡¡ "<<endl;cout<<" "<<endl;}
            
        }
    }
}
