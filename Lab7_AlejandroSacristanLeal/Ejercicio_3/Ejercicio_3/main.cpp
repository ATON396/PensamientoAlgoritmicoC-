//
//  main.cpp
//  Ejercicio_3
//
//  Created by Aton Code on 5/5/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

/*
 Programa que lleva el contro
 de las ventas que un empleado
 realiza de los productos de la
 empresa.
 **/

#include <iostream>

using namespace std;


void menu(int db[10][18]);
void llenar(int db[10][18]);
void dibujar(int db[10][18]);

int main() {
    
    //Matrix de empleados en funcion de productos
    int db[10][18];
    //Inica en 0 todo
    llenar(db);
    
    //Menu llama a funciones
    menu(db);
    
    return 0;
}

void menu(int db[10][18])
{
    
    //variables
    int v=0, p=0, valu=0, sum=0;
    char obs='f';
    
    printf("%s\n\n","Bienvenidos a Control de Ventas");
    printf("%s\n\n","Esta es Tu Actual Matrix de Ventas");
    dibujar(db);
    printf("\n");
    printf("%s\n\n","Menu");
    printf("%s\n","A -> Actualiza las Ventas");
    printf("%s\n","B -> Total de cada vendedor");
    printf("%s\n","C -> Ingresos Totales");
    printf("%s\n\n","S -> Salir");
    printf("%s","Ingresa la Opcion: ");
    cin>>obs;
    printf("\n");
    
    //Logica
    if(obs=='A'||obs=='a')
    {
        
       printf("%s\n\n","Ahora dijita");
       printf("%s","El Numero de Vendedor de la tabla: ");
       cin>>v;
       printf("\n");
       printf("%s","Luego el Numero de Producto de la tabla: ");
       cin>>p;
       printf("\n");
       printf("%s","Finalmente pon el valor de la venta: ");
       cin>>valu;
       printf("\n");
    //Logica
       db[p][v]=valu;
    //Dibujando
       dibujar(db);
       printf("\n");
       menu(db);
        
        
    }
    if(obs=='B'||obs=='b'){
        //Tengo que por cada col recorrer todas las filas y sumar.
        printf("%s\n\n","El Total de Cada Vendedor es: ");
        
        for(int c=0; c < 18; c++)//col
        {
            for(int f=0; f < 10; f++)//filas
            {
               sum += db[f][c];
                
            }
            printf("%s%d%s%d\n","Vendedor ",c," Total vendido: $",sum);
            sum=0;
            
        }
        
        printf("\n");
        menu(db);
    }
    if(obs=='C'||obs=='c')
    {
        //inglesos totales es recorrer todo y sumar
        printf("%s\n\n","El Total de Cada Vendedor es: ");
        
        for(int c=0; c < 18; c++)//col
        {
            for(int f=0; f < 10; f++)//filas
            {
               sum += db[f][c];
                
            }
            
        }
        printf("%s%d\n"," Ingreso Total: $",sum);
        
        printf("\n");
        menu(db);
    }
    if(obs=='S'||obs=='s'){}
}
//Inicia la matris en 0
void llenar(int db[10][18])
{
    for(int f=0; f < 10; f++)//filas
    {
        for(int c=0; c < 18; c++)//col
        {
            db[f][c]=0;
        }
    }
}

void dibujar(int db[10][18])
{
    cout<<"V0  V1  V2  V3  V4  V5  V6  V7  V8  V9  V10 V11 V12 V13 V14 V15 V16 V17"<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    for(int f=0; f < 10; f++)//filas
    {
        for(int c=0; c < 18; c++)//col
        {
            printf("%s%d%s","",db[f][c],"   ");
        }
        printf("%s%d","|-> Product ",f);
        printf("\n");
         
    }
     cout<<"------------------------------------------------------------------------"<<endl;
}

