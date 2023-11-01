#include <stdio.h>
#include <stdlib.h>
void informe (float empleados[5][6],float *pxh,int id)
{
	float total=0,totalf=0,ptotal=0;
	printf("\n----------informe de empleados:---------- \n");
	printf("\nlegajo   ||lunes    ||martes   ||miercoles||jueves   ||viernes  ||sabado   ||T.horas  ||$ x hora ||total    ||\n");
	for (int i=0; i<5; i++)
	{
		printf("%d        ||",i+1);
		for (int j=0; j<6; j++)
		{
			printf ("%.2f     ||",empleados[i][j]);
			total+=empleados[i][j];
			
		}
		ptotal=total*pxh[i];
		totalf+=ptotal;
		printf("%.2f     ||%.2f     ||%.2f     ||",total,pxh[i],ptotal);
		printf ("\n");	
		total=0;
	}
	
	printf("el total que la empresa debe de pagar es de %.2f\n\n",totalf);
	printf("el numero de legajo del empleado que mas horas hizo el dia 1 es: #%d",id);
}
int main() {
	float empleados[5][6]={0},pxh[5],maxlunes=0;
	int k=1,id=0;
	
	for(int i=0;i<5;i++)
	{
		printf("ingrese sueldo por hora: ");
		scanf("%f", & pxh[i]);
		for(int j=0;j<6;j++)
		{
			printf("chofer con numero de legajo #%d ingrese sus horas en servicio el dia %d: ",i+1,k);
			scanf("%f", & empleados[i][j]);
			
			
			if(k==1)
			{
				if(maxlunes<=empleados[i][j])
				{
					maxlunes=empleados[i][j];
					id=i+1;
				}
			}
			k++;
		}
		k=1;
	}
	
	informe(empleados,pxh,id);
	return 0;
}

