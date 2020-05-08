//
//  main.cpp
//  Ejercicio_2
//
//  Created by Alejandro Sacristan Leal on 5/4/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//
/*
 
 Menu de Reservas de puestos de
 avion y cancelacion de estos.
 Uso de Matrix.
 
 **/

#include <iostream>

using namespace std;

void llenar(int puestos[25][4]);
void dibujar(int puestos[25][4]);
void menu(int puestos[25][4]);
void recorrer(int puestos[25][4], int f, int c, char obs, bool boole);
void editar(int puestos[25][4],char obs);


int main() {
    
    //Matrix
    int puestos[25][4];
    
    //Dibuja los Puestos una semana antes del vuelo
    llenar(puestos);
    
    //MENU-> Cancelar o Reservar
    menu(puestos);
    

    return 0;
}

void llenar(int puestos[25][4])
{
    //Contadores de Puestos
    int libre=1, ocupado=1;
    
    //Llenar la matrix con 0 y 1 de manera aleatoria
    //Con el fin de que 0 es libre y 1 ocupado.
    cout<<"Tripulacion del vuelo AK333 "<<endl;
    cout<<" "<<endl;
    cout<<" Cabina del Piloto"<<endl;
    cout<<" "<<endl;
    cout<<"   C0 C1   C2 C3"<<endl;
    for(int f = 0; f < 25; f++)//Filas
    {
    
        cout<<"||______||______||"<<endl;
        cout<<"||";
        for(int c = 0; c < 4; c++)//Col
        {
            if(c % 2 == 0 != f % 3 == 0)
            {
                puestos[f][c]=0;
                libre++;
                
            }else{puestos[f][c]=1;ocupado++;}
            
            cout<<" "<<puestos[f][c]<<" ";
            if(c%2!=0){cout<<"||";}
        }
        cout<<"-> F"<<f;
        cout<<" "<<endl;
    }
    cout<<"   Cola del Avión"<<endl;
    cout<<" "<<endl;
    
    cout<<"Esta es la tripulacion para el vuelo AK333 faltando un semana"<<endl;
    cout<<" "<<endl;
    cout<<"Puestos Libres (0): "<<libre<<endl;
    cout<<" "<<endl;
    cout<<"Puestos Ocupados (1): "<<ocupado<<endl;
    cout<<" "<<endl;
    
}

void menu(int puestos[25][4])
{
    
    char obs = 'f';
    
    cout<<"¿Que deseas hacer?"<<endl;
    cout<<" "<<endl;
    
    cout<<"A -> Para CANCELAR"<<endl;
    cout<<" "<<endl;
    cout<<"B -> Para RESERVAR"<<endl;
    cout<<" "<<endl;
    cout<<"C -> Para SALIR"<<endl;
    cout<<" "<<endl;
    cout<<"Dijita la opcion: ";
    cin>>obs;
    cout<<" "<<endl;
    
    //Logica
    if(obs=='a'||obs=='A'){editar(puestos, obs);}
    if(obs=='b'||obs=='B'){editar(puestos, obs);}
    if(obs=='c'||obs=='C'){}
    

}

void editar(int puestos[25][4],char obs)
{
    int f=0,c=0;
    bool boole=false;
    
    if(obs=='a'||obs=='A')//CANCELAR
    {
        boole=true;
        cout<<"¿Que puesto desea cancelar?"<<endl;
        cout<<" "<<endl;
        cout<<"Dijita la pocicion en C (0,1,2,3): ";
        cin>>c;
        cout<<" "<<endl;
        cout<<"Ahora dijita la pocicion en F (0 - 24): ";
        cin>>f;
        cout<<" "<<endl;
        
        recorrer(puestos,f,c,obs,boole);
    
        
    }
    
    if(obs=='b'||obs=='B')//RESERVAR
    {
        boole=true;
        cout<<"¿Que puesto desea cancelar?"<<endl;
        cout<<" "<<endl;
        cout<<"Dijita la pocicion en C (0,1,2,3): ";
        cin>>c;
        cout<<" "<<endl;
        cout<<"Ahora dijita la pocicion en F (0 - 24): ";
        cin>>f;
        cout<<" "<<endl;
        
        recorrer(puestos,f,c,obs,boole);
        
    }
    
}
void dibujar(int puestos[25][4])
{
    //Contadores de Puestos
    int libre=1, ocupado=1;
    
    cout<<"Tripulacion del vuelo AK333 "<<endl;
    cout<<" "<<endl;
    cout<<" Cabina del Piloto"<<endl;
    cout<<" "<<endl;
    cout<<"   C0 C1   C2 C3"<<endl;
    for(int f = 0; f < 25; f++)//Filas
    {
    
        cout<<"||______||______||"<<endl;
        cout<<"||";
        for(int c = 0; c < 4; c++)//Col
        {
            if(puestos[f][c]==0){libre++;}else{ocupado++;}
            
            cout<<" "<<puestos[f][c]<<" ";
            if(c%2!=0){cout<<"||";}
        }
        
        cout<<"-> F"<<f;
        cout<<" "<<endl;
    }
    cout<<"   Cola del Avión"<<endl;
    cout<<" "<<endl;
    
    cout<<"Esta es la tripulacion Actualizada para el vuelo AK333 faltando un semana"<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"Puestos Libres (0): "<<libre<<endl;
    cout<<" "<<endl;
    cout<<"Puestos Ocupados (1): "<<ocupado<<endl;
    cout<<" "<<endl;

}

void recorrer(int puestos[25][4], int f, int c, char obs, bool boole)
{
    
    string estado=";";
    
    if(obs=='a'||obs=='A')//CANCELAR
    {
        if(puestos[f][c]==1)
        {
            estado="Ocupado";
            cout<<"Puesto: "<<"F"<<f<<" C"<<c<<" Estado: "<<estado<<" ";
            cout<<" "<<endl;
            puestos[f][c]=0;
            estado="Libre";
            cout<<"Actualizando... "<<endl;
            cout<<"Puesto: "<<"F"<<f<<" C"<<c<<"a estado: "<<estado<<" ";
            cout<<" "<<endl;
            cout<<"!!Felicitaciones tu puesto ha sido cancelado¡¡"<<endl;
            dibujar(puestos);
        }else{
            cout<<"El puesto esta libre y no se puede cancelar vuelve a intertarlo "<<endl;
        }
        
                
        
    }
    if(obs=='b'||obs=='B')//RESERVAR
    {
        if(puestos[f][c]==0)
        {
            estado="Libre";
            cout<<"Puesto: "<<"F"<<f<<" C"<<c<<" Estado: "<<estado<<" ";
            cout<<" "<<endl;
            puestos[f][c]=1;
            estado="Ocupado";
            cout<<"Actualizando... "<<endl;
            cout<<"Puesto: "<<"F"<<f<<" C"<<c<<"a estado: "<<estado<<" ";
            cout<<" "<<endl;
            cout<<"!!Felicitaciones tu puesto ha sido Reservado¡¡"<<endl;
            cout<<" "<<endl;
            dibujar(puestos);
            
        }else{
            cout<<"El puesto no esta libre por lo tanto no se puede reservar. vuelve a intertarlo "<<endl;
        }
    }
    
}
