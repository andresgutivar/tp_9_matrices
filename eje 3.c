#include <stdio.h>
#include <stdlib.h>

float compra_mayor(float empleados[5][5])
{	
	int mayor=0;

for(int i=0;i<5;i++)
{
	
	for(int j=0;j<5;j++)
	{
		if(empleados[i][j]>mayor)
		{
			mayor=empleados[i][j];
		}
	}
}

	
	return mayor;
}
int main() {
	float empleados[5][5];
	for(int i=0;i<5;i++)
	{

		for(int j=0;j<5;j++)
		{
			printf("empleado #%d ingrese la venta del dia #%d: ",i+1,j+1);
			scanf("%f",& empleados[i][j]);
		}
	}

	printf("\n la mayor venta registrada es de :%.2f",compra_mayor(empleados));
	return 0;
}

