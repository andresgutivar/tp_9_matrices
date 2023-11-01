#include <stdio.h>
#include <stdlib.h>
void consignas(int ventas[4][7])
{
	int max_venta=0,k=0;
	float prom_venta_semana=0,total_ventas=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<7;j++)
		{
			total_ventas+=ventas[i][j];
			
		}
		prom_venta_semana=total_ventas/7;
		printf("\n\nel total de ventas de la semana %d es de: %.0f",i+1,total_ventas);
		printf("\n\nel promedio de ventas de la semana %d es de: %.0f",i+1,prom_venta_semana);
		if(max_venta<total_ventas)
		{
			max_venta=total_ventas;
			k=i+1;
		}
		total_ventas=0;
	}
	printf("\n\nla semana de mas venta es la numero #%d",k);
}
int main() {
	int ventas[4][7]={0};
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<7;j++)
		{
			printf("ingrese venta del la semana %d en el dia %d: ",i+1,j+1);
			scanf("%d",& ventas[i][j]);
		}
	}
	consignas(ventas);
	return 0;
}

