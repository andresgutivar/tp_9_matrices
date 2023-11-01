#include <stdio.h>
#include <stdlib.h>
void consignas(int torres[7][20][6])
{
	int total_complejo=0;
	float prom_hab_torre=0,prom_hab_piso=0,total_torre=0;
	for(int i=0;i<7;i++)//torres
	{
		for(int j=0;j<20;j++)//pisos
		{
			for(int k=0;k<6;k++)//departamento
			{
				total_complejo+=torres[i][j][k];
				total_torre+=torres[i][j][k];
			}
			
		}
		prom_hab_torre=total_torre/7;
		prom_hab_piso=total_torre/20;
		printf("CANTIDAD DE HABITANTES DE LA TORRE #%d: %.0f\n\n",i+1,total_torre);
		printf("\n\nPROMEDIO DE HABITANTES DE LA TORRE #%d: %.2f",i+1,prom_hab_torre);
		printf("\n\nPROMEDIO DE HABITANTES DE LA TORRE #%d CALCULADA POR PISO: %.2f",i+1,prom_hab_piso);
		total_torre=0;
		
	}
	
	printf("CANTIDAD DE HABITANTES DEL COMPLEJO: %d",total_complejo);
}
int main() {
	int torres[7][20][6]={0};
	
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<20;j++)
		{
			for(int k=0;k<6;k++)
			{
				printf("ingrese cantidad de habitantes de la torre #%d - piso #%d - departamento #%d: ",i+1,j+1,k+1);
				scanf("%d",&torres[i][j][k]);
			}
		}
	}
	
	consignas(torres);
	return 0;
}

