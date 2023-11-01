#include <stdio.h>
#include <stdlib.h>
void cambiar_valores_negativos(float matriz[3][3])
{
	for(int i=0;i<3;i++)
	{
		
		for(int j=0;j<3;j++)
		{
			if(matriz[i][j]<0)
			{
				matriz[i][j]=0;
			}
		}
	}
	
	printf("\n----------matriz reemplazada valores negativos por ceros (0):---------- \n");
		for (int i=0; i<3; i++)
	{
			for (int j=0; j<3; j++)
			{
				printf ("%.2f ||",matriz[i][j]);
			}
			printf ("\n--------------------------");
			printf ("\n");		
	}
		
}

int main() {
	float matriz[3][3];
	int k=1;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("ingrese el valor #%d de la matriz: ",k);
			scanf("%f", & matriz[i][j]);
			k++;
		}
	}
	printf("\n----------matriz original impresa:---------- \n");
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			printf ("%.2f ",matriz[i][j]);
		}
		printf ("\n");		
	}
	cambiar_valores_negativos(matriz);
	return 0;
}

