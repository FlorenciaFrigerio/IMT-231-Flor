#include <stdio.h>
int main (void){
	int numA=0;
	int numB=0;
	printf("Ingrese un numero \n");
	scanf( "%d", &numA);
	printf("Ingrese otro numero \n");
	scanf("%d", &numB);
	if(numA>numB){
		printf("El  numero mayor es %d\n",numA);
	}else if (numA=numB){
		printf("Ambos son iguales \n");
	}else{
		printf("El numero mayor es %d\n",numB);
	}
	return 0;
}