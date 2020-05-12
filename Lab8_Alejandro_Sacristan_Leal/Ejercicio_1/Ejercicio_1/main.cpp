//
//  main.cpp
//  Ejercicio_1
//
//  Created by Alejandro Sacristan Leal on 5/8/20.
//  Copyright © 2020 aslbank.com. All rights reserved.
//

#include <iostream>
using namespace std;

//Nota: cambiar los valores de las constantes para envaluar la funcionalidad a menores de 3 pienso
const int Dep = 2, meses = 2, expertos = 2;

//Structuras
struct expert{
    
    int idExperto;
    int aguaDep[Dep];
    int MesMas;
};

int b(int datos[Dep][meses]);
int c(int datos[Dep][meses], expert pred[expertos], int masMes, int winiers[expertos]);

int main() {
    
    int masMes= 0, NumerExpertosGanadores=0;
    
    //Matrix
    int datos[Dep][meses], winiers[expertos];
    expert pred[expertos];
    
    //Llenar Datos
    cout<<"IDAM "<<endl;
    cout<<" "<<endl;
    cout<<"LLena la Matriz de Datos "<<endl;
    cout<<" "<<endl;
     for(int c= 0; c < meses; c++)//col
       {
           for(int f= 0; f < Dep; f++)//fila
           {
               cout<<"Lluvia para Mes: "<<c<<" Dep: "<<f<<" -> ";
               cin>>datos[f][c];
               cout<<" "<<endl;
           }
       }
    cout<<"Dibujando la Matriz de Datos "<<endl;
    cout<<" "<<endl;
    //Dibujar Matriz de Datos
    for(int c= 0; c < meses; c++)//col
    {
        cout<<"Mes "<<c<<endl;
        for(int f= 0; f < Dep; f++)//fila
        {
            cout<<datos[f][c]<<" Dep -> "<<f<<endl;
        }
        
        cout<<" "<<endl;
    }
    cout<<"Ingresa Los Datos de los expertos "<<endl;
    
    //Ingresar Predicciones de los expertos
    for(int i= 0; i < expertos; i++)//fila
    {
        cout<<"Experto: "<<i<<endl;
        cout<<"Id: ";
        cin>>pred[i].idExperto;
        cout<<" "<<endl;
        for(int d= 0; d < Dep; d++)//fila
        {
          cout<<"Lluvia Max Para Dep: "<<d<<endl;
          cin>>pred[i].aguaDep[d];
          cout<<" "<<endl;
        }
        
        cout<<"Mes con mas lluvia: "<<endl;
        cin>>pred[i].MesMas;
        cout<<" "<<endl;
        
    }
    
    //Funcion b retorna el mes que mas llovio en base de los datos de IDAM
    masMes= b(datos);
    
    //Funcion c retorna la cantidad de expertos acertados en la suma de los meses de cada dep
    //de la matriz datos con un rango de precicion menor a 50 y genera un arreglo disponible para
    //otras funciones llemanos winers donde almacena los id de cada experto y por ultimo
    //imprime los id de los expertos que acertaron en el mesMas en base al dato que retorno la anteriro funcion
    NumerExpertosGanadores= c(datos,  pred, masMes, winiers);
    cout<<"Finn..:)"<<endl;
    
    return 0;
}


int b(int datos[Dep][meses])
{
    int lluviasTotales[meses], sum= 0, mesMas= 0, max= 0;
    
    //Crear ciclo que sume todas las filas de cada colum de datos y lo guarde
    for(int c= 0; c < meses; c++)//col
    {
        for(int f= 0; f < Dep; f++)//fila
        {
            sum+= datos[f][c];
            lluviasTotales[f]= sum;
        }
        sum= 0;
    }
    //Retornar el mes que mas llovio
    //Busqueda del Mayor del arreglo
    for(int m= 0; m < Dep; m++)//fila
    {
        if(lluviasTotales[m] > max)
        {
            max= lluviasTotales[m];
            mesMas= m;
        }
    }
    
    return mesMas;
}

int c(int datos[Dep][meses], expert pred[expertos], int masMes, int winiers[expertos])
{
    int lluviasTotales[Dep], Numberwiners=0, sum=0;
    
    for(int f= 0; f < Dep; f++)//fila
    {
        for(int c= 0; c < meses; c++)//col
        {
            sum+= datos[f][c];
            lluviasTotales[f]= sum;
        }
        sum= 0;
    }
    
    for(int ex= 0; ex < expertos; ex++)//Cantidad de meteorilogS Acertados
    {
        for(int d= 0; d < Dep; d++)//Cantidad de meteorilogS Acertados
        {
            
            if((pred[ex].aguaDep[d]-lluviasTotales[d])<=50)
            {
                Numberwiners++;
                winiers[ex]= pred[ex].idExperto;
            }
            
        }
        
        cout<<" "<<endl;
        cout<<"El EXPERTO QUE ACERTO EN EL PRONOSTICO DEL MES MAS LLUVIOSO"<<endl;
        if(pred[ex].MesMas == masMes)
        {
            cout<<"ID: "<<pred[ex].idExperto<<endl;
            cout<<"ACERTOOOO!!! "<<endl;
            cout<<" "<<endl;
            
        }else{
            
            cout<<"ID: "<<pred[ex].idExperto<<" No Acerto!!! :( "<<endl;
            cout<<" "<<endl;
            
        }
    }
    return Numberwiners;
}
