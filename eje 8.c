#include <stdio.h>
#include <stdlib.h>
int contar(float matriz[3][3])
{
	int ceros=0,negativos=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(matriz[i][j]<0)
			{
				negativos++;
			}
			if(i==j)
			{
				if(matriz[i][j]==0)
				{
					ceros++;
				}
			}
		}
	}
	printf("la cantidad de ceros (0) de la diagonal principal de tu matriz son: %d",ceros);
	return negativos;
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
			printf ("%.2f ||",matriz[i][j]);
		}
		printf ("\n--------------------------");
		printf ("\n");		
	}
	printf("\n\nla cantidad de negativos (0) de tu matriz son: %d",contar(matriz));
	return 0;
}

