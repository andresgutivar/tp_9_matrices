#include <stdio.h>
#include <stdlib.h>
void ordenar(int *vector,int *auxvector,int tamano)
{
	int k=0;
	auxvector[0]=vector[tamano-1];
	for(int i=1;i<tamano;i++)
	{
		
		auxvector[i]=vector[k];
		k++;
	}
	
	for(int i=0;i<tamano;i++)
	{
		printf("valor #%d : %d\n",i+1,auxvector[i]);
	}

}
int main() {
	int tamano=0;
	
	printf("ingrese la cantidad de numeros que tenga su vector: ");
	scanf("%d",& tamano);
	
	
	int vector[tamano],auxvector[tamano];
	
	for(int i=0;i<tamano;i++)
	{
		printf("ingrese un valor: ");
		scanf("%d",&vector[i]);
	}
	
	ordenar(vector,auxvector,tamano);
	return 0;
}

