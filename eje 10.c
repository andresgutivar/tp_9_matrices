#include <stdio.h>
#include <stdlib.h>
void colocar_matriz_vector(int matriz[10][10])
{
	int fila[10],columna[10],i=0,j=0,total=0;
	
	//FILAS
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			total+=matriz[i][j];
		}
		fila[i]=total;
		total=0;
	}	
	//COLUMNAS
	for(j=0;j<10;j++)
	{
		for(i=0;i<10;i++)
		{
			total+=matriz[i][j];
		}
		columna[j]=total;
		total=0;
	}
	
	printf("----------filas----------\n\n");
	for(i=0;i<10;i++)
	{
		printf("sumatoria de los valores de la fila #%d:%d\n",i+1,fila[i]);
	}
		
	
	printf("\n----------columnas----------\n\n");
	for(i=0;i<10;i++)
	{
		printf("sumatoria de los valores de la columna #%d: %d\n",i+1,columna[i]);
	}
}
int main() {
	int matriz[10][10],k=1;
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			printf("ingrese el valor #%d: ",k);
			scanf("%d",& matriz[i][j]);
			k++;
		}
	}
	
	for ( int i=0; i<10; i++)
	{
		for (int j=0; j<10; j++)
		{
			printf ("%d ",matriz[i][j]);
		}
		printf ("\n");		
	}
	colocar_matriz_vector(matriz);
	return 0;
}

