#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscar_cero(int matriz[4][4])
{
	int num=0,contador=0;
	srand(time(NULL));
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			
			num = rand() % 10;
			matriz[i][j]=num;
			
			if(matriz[i][j]==0)
			{
				contador++;
			}
		}
	}
	
	return contador;
}
int main() {
	
	int matriz[4][4]={0};
	
	printf("el numero 0 se repite %d veces en la matriz\n\n",buscar_cero(matriz));
	
	for(int i=0;i<4;i++)
	{
		printf("-----fila %d-----\n",i+1);
		for(int j=0;j<4;j++)
		{
			printf("columna %d ",j+1);
			printf("\t\tvalor %d \n",matriz[i][j]);
		}
	}
	return 0;
}

