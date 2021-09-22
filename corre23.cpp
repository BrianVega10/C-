#include<stdio.h>
int main(){
	int i,a,factorial,s,n;
	int e; 
	printf("Indique un numero:");
	scanf("%d",&a);
	factorial=1;
	for(i=1;i<=a;i++)
	factorial=factorial*i;
	printf("El factorial de:%d",a);printf("__es:%d"),&factorial;
	printf("\n¿Desea realizar de nuevo un procedimiento:si=1/no=2?");
	scanf("%d",&e);
	while (e=1){ 
	printf("\nIndique un numero:");
	scanf("%d",&a);
	e=1;
	factorial=1;
	for(i=1;i<=a;i++)
	factorial=factorial*i;
	printf("El factorial de:%d",a);printf("__es:%d"),factorial;
	printf("\n¿Desea realizar de nuevo un procedimiento:si=1/no=2?");
	scanf("%d",&e);
    }
	printf("Gracias por usar la calculadora de factorial");
	return 0;
	}
