#include <stdio.h>
#include <stdlib.h>

int comparar (int matriza[3 n][3],int matrizb[3][3])
{
	int contador=0;
	for(int i=0;i<3;i++)
	{
		
		for(int j=0;j<3;j++)
		{
			if (i==j)
			{
				if(matriza[i][j]==matrizb[i][j])
				{
					contador++;
				}
			}
		}
		
	}
	
	
	
	return contador;
}
int main() {
	int matriza[3][3],matrizb[3][3],k=1;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("ingrese el valor #%d de la matriz 1: ",k);
			scanf("%d", & matriza[i][j]);
			k++;
		}
	}
	k=1;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("ingrese el valor #%d de la matriz 2: ",k);
			scanf("%d", & matrizb[i][j]);
			k++;
		}
	}
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			printf ("%d ",matriza[i][j]);
		}
		printf ("\n");		
	}
	printf ("\n\n\n");
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			printf ("%d ",matrizb[i][j]);
		}
		printf ("\n");
	}
	
	int contador=comparar ( matriza, matrizb);
	
	if(contador==3)
	{
		printf("la diagonal principal de tus matrices son iguales");
	}
	else
	   {
		printf("la diagonal principal de tus matrices NO son iguales");
	}
	return 0;
}

