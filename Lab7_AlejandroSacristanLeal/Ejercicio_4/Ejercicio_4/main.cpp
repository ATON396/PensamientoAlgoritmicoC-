//
//  main.cpp
//  Ejercicio_4
//
//  Created by Alejandro Sacristan Leal on 5/6/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//
/*

**/
#include <iostream>

using namespace std;

//Funciones
void dibujar(float datos[7][8]);
void a(float datos[7][8],float costos[8],float cproduccion[7]);
void b(float datos[7][8],float pedidos[7],  double ineventario[8]);
void c(double ineventario[8],float costos[8],float costosTotal[8]);
void d(double ineventario[8], float existencias[8]);

int main() {
   
    //Matrix de Datos
    float datos[7][8]={{10,20,30,40,0,60,10,80},{0,70,0,50,40,30,0,10},{5,10,15,0,10,15,5,0},{10,20,10,20,10,0,10,20},{4,0,8,0,6,8,4,0},{0,6,9,12,15,0,1,24},{20,18,0,14,0,10,8,6}};
    
    //Vectores
    float costosTotal[8];
    float cproduccion[7];
     double ineventario[8];
    float costos[]={3.5,0.1,2.0,1.5,6.0,4.2,2.5,1.3};
    float pedidos[]={100.0,25.0,75.0,150.0,80.0,90.0,10.0};
    float existencias[]={120.0,0.0,20.0,60.0,40.0,90.0,0.0};
    dibujar(datos);
    a(datos,costos,cproduccion);
    b(datos, pedidos,ineventario);
    c(ineventario,costos,costosTotal);
    d(ineventario,existencias);
    
    
    
    
    return 0;
}

void dibujar(float datos[7][8])
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout<<datos[i][j]<<"  ";
        }
        cout<<"  "<<endl;
    }
}

void a(float datos[7][8], float costos[7],float cproduccion[7])
{
    //Obejtivo Crea arreglo con el costo de producción de cada motor.
    //sumar el producto de insumos necesarios por el costo unitario de cada insumo
    int sum=0;
    cout<<"  "<<endl;
    for (int j = 0; j < 7; j++)
    {
        for (int c = 0; c < 8; c++)
        {
            sum +=(datos[j][c]*costos[c]);
        }
        cout<<"Costo total para el motor "<<j<<" es de $"<<sum<<endl;
        cproduccion[j]=sum;
        sum=0;
    }
}

void b(float datos[7][8],float pedidos[7],  double ineventario[8])
{
    double mult=0,r=0;
    int aux=0;
    cout<<"  "<<endl;
    for (int j = 0; j < 7; j++)
    {
        cout<<"Para "<<pedidos[j] <<"U de Motor "<<j<<endl;
        for (int c = 0; c < 8; c++)
        {
            mult =(datos[j][c]*pedidos[aux]);
            cout<<"Producto "<<c<<" se requiere "<<mult<<" unidades "<<endl;
            mult=0;
        }
        aux++;
        cout<<" "<<endl;
    }//Fin
    
    for (int j = 0; j < 8; j++)
     {
         r=0;
         for (int c = 0; c < 7; c++)
         {
             mult =(datos[c][j] * pedidos[c]);
             r+=mult;
         }
         ineventario[j]=r;
     }//Fin
    cout<<"Total de Unidades de Productos Requeridos"<<endl;
    cout<<" "<<endl;
    for (int c = 0; c < 8; c++)
    {
        cout<<"Producto "<<c<<" Total: "<<ineventario[c]<<" Unidades"<<endl;
    }
}
void c(double ineventario[8],float costos[8],float costosTotal[8])
{
    
    double mult=0;
    for (int c = 0; c < 8; c++)
    {
        mult = (ineventario[c] * costos[c]);
        costosTotal[c] = mult;
    }
          
        cout<<" "<<endl;
        cout<<"Costo Total de Unidades de Productos Requeridos"<<endl;
        cout<<" "<<endl;
        for (int c = 0; c < 8; c++)
        {
            cout<<"Producto "<<c<<" Costo Total: $ "<<costosTotal[c]<<endl;
        }
    cout<<" "<<endl;
}

void d(double ineventario[8], float existencias[8])
{
    double diferencia=0,d[8];
    for (int c = 0; c < 8; c++)
    {
        diferencia = (ineventario[c] - existencias[c]);
        d[c] = diferencia;
    }
    cout<<" "<<endl;
    cout<<"Diferencia entre inventario nesesario y actual"<<endl;
    cout<<" "<<endl;
    for (int c = 0; c < 8; c++)
    {
     cout<<"Producto "<<c<<" Se requiere adquirir: "<<d[c]<<" Unidades"<<endl;
    }
    cout<<" "<<endl;
}
