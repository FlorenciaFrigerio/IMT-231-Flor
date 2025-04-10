#include <stdio.h>
int main (void){
	int num=0;
	 printf("Ingrese un numero \n");
	scanf("%d",&num);
	if(num<0){
	printf("El numero es negativo \n");
	}else if (num=0){
	printf("El numero es igual a cero \n");
	}else{
	printf("El numero es positivo \n");
	}
	return 0;
}