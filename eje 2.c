#include <stdio.h>
#include <stdlib.h>
void ingreso_de_datos(float choferes[20][7])
{
	float km=0;
	int legajo=0;
	for(int i=0;i<20;i++)
	{
		printf("ingrese su numero de legajo: ");
		scanf("%d",&legajo);
		while(legajo>20 || legajo<1)
		{
			printf("ERORR INGRESE UN LEGAJO ENTRE 1 Y 20");
			printf("ingrese su numero de legajo: ");
			scanf("%d",&legajo);	
		}
		for(int j=0;j<7;j++)
		{
			printf("ingrese su kilometraje el dia #%d de la semana : ",j+1);
			scanf("%f",&km);
			
			choferes[legajo-1][j]=km;
		}
	}
	
}
int main() {
	float choferes[20][7]={0},total=0;
	
	ingreso_de_datos(choferes);
	
	for(int i=0;i<20;i++)
	{
		printf("-----numero de legajo: %d-----\n",i+1);
		
		for(int j=0;j<7;j++)
		{
			printf("dia #%d ",j+1);
			printf("\t\tkilometraje: %.2f \n",choferes[i][j]);
			
			total+=choferes[i][j];
		}
		printf("\t\tTOTAL DE KILOMETRAJE: %.2f \n",total);
		
		total=0;
	}
	
	return 0;
}

