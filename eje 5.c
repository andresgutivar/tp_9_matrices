#include <stdio.h>
#include <stdlib.h>
void resultados(float matriz[12][15])
{
	float menor=matriz[0][0],suma=0,negativos=0;
	
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<7;j++)
		{
			if(menor<matriz[12][15])
			{
				menor=matriz[12][15];
			}
			
			if(i<=5)
			{
				suma+=matriz[i][j];
			}
			
			if(j>=5 && j<=9)
			{
				if(matriz[i][j]<0)
				{
					negativos++;
				}
			}
		}	
	}
	
	printf("el elemento menor de la matriz es el: %.2f",menor);
	printf("la suma de los elementos de las cinco primeras filas del arreglo es: %.2f",suma);	
	printf("el total de elementos negativos en las columnas de la quinta a la nueve es: %.2f",negativos);	
	
}
int main() {
	float matriz[12][15]={0};
	int k=1;
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<7;j++)
		{
			printf("ingrese el valor #%d: ",k);
			scanf("%f", & matriz[i][j]);
			k++;
		}
	}
	resultados(matriz);
	return 0;
}



