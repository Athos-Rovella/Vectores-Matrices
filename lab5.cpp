#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    const int F = 5;
    const int C = 5;
    int matriz[F][C] = {{}};
    float promedio = 0;
    int sumParesCol[C] = {};
    int sumImpFil[F] = {};
    int posMax[2] = {};
    int valMax;
    int posMin[2] = {};
    int valMin;
    int aux;

    srand(time(0));

    //Asignación de valores
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    cout<<"La matriz es:"<<endl;
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
    

    //Promedio total de la matriz
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            promedio += matriz[i][j];
        }
        
    }
    promedio = promedio / (F * C);
    cout<<endl<<"El promedio total de la matriz es: "<<promedio<<endl;

    //Suma de los pares de cada columna
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if(matriz[i][j] % 2 == 0){
                sumParesCol[j] += matriz[i][j];
            }
        }
    }
    cout<<endl<<"La suma de los números pares de cada columna es: "<<endl;
    for (int i = 0; i < C; i++)
    {
        cout<<sumParesCol[i]<<"\t";
    }
    
    //Suma de los impares de cada fila
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if(matriz[i][j] % 2 == 1){
                sumImpFil[i] += matriz[i][j];
            }
        }
    }
    cout<<endl<<"La suma de los números impares de cada fila es: "<<endl;
    for (int i = 0; i < C; i++)
    {
        cout<<sumImpFil[i]<<"\t";
    }

    //Asignación del valor maximo y su posicion
    valMax = matriz[0][0];
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (valMax < matriz[i][j])
            {
                valMax = matriz[i][j];
                posMax[0] = j +1;
                posMax[1] = i +1;
            }
            
        }
    }
    cout<<endl<<"El valor máximo de la matriz es: "<<valMax<<" Y esta en la posición: ("<<posMax[0]<<";"<<posMax[1]<<")"<<endl;

    //Asignación del valor minimo y su posicion
    valMin = matriz[0][0];
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (valMin > matriz[i][j])
            {
                valMin = matriz[i][j];
                posMin[0] = j +1;
                posMin[1] = i +1;
            }
            
        }
    }
    cout<<endl<<"El valor minimo de la matriz es: "<<valMin<<" Y esta en la posición: ("<<posMin[0]<<";"<<posMin[1]<<")"<<endl;


    //Ordenando la fila 2 de forma ascendente
    aux = matriz[0][0];
	for(int i = 0; i < C; i++)
	{
		for(int j = i + 1; j < C; j++)
		{
			if(matriz[1][i] > matriz [1][j])
			{
				aux = matriz[1][i];
				matriz[1][i] = matriz [1][j];
				matriz [1][j] = aux; 
			}
		}
	}
    cout<<endl<<"La fila número 2 ordenada de forma ascendente es: "<<endl;
    for (int i = 0; i < C; i++)
    {
        cout<<matriz[1][i]<<"\t";
    }
    
    //Ordenando la columna 3 de forma descendente
    for (int i = 0; i < F; i++)
    {
        for (int j = i + 1; j < F; j++)
        {
            if (matriz[i][2] < matriz[j][2])
            {
                aux = matriz[i][2];
				matriz[i][2] = matriz [j][2];
				matriz [j][2] = aux; 
            }
            
        }
        
    }
    cout<<endl<<"La columna número 3 ordenada de forma descendente es: "<<endl;
    for (int i = 0; i < C; i++)
    {
        cout<<matriz[i][2]<<endl;
    }

    //intercambiando la columna 2 y la 4
    for (int i = 0; i < C; i++)
    {
        aux = matriz[i][1];
        matriz[i][1] = matriz [i][3];
        matriz [i][3] = aux; 
    }
    cout<<endl<<"La columna número 2 intercambiada con la 4 queda: "<<endl;
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
}