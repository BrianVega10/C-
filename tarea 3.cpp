#include<stdio.h>
int main(){
	int hipotenusa;
	int co;
	int ca;
	int t,v,r,resul;
	printf("¿Que desea encontrar:\n1)Cateto Opuesto\n2)Cateto Adyacente\n3)Hipotenusa.\n");
	scanf("%d",&t);
	switch(t){
		case 1:
			printf("Indique la hipotenusa:");
			scanf("%d",&hipotenusa);
			printf("Indiqque el cateto adyacente:");
			scanf("%d",&ca);
			v=hipotenusa*hipotenusa;
			r=ca*ca;
			resul=v-r;
			printf("El cateto opuesto tiene un valor al cuadrado de:%d",resul);
			break;
		
		case 2:
	         printf("Indique el valor de la hipotenusa:");
		     scanf("%d",&hipotenusa);
		     printf("Indique elvalor del cateto opuesto:");
		     scanf("%d",&co);
		     v=hipotenusa*hipotenusa;
		     r=co*co;
		     resul=v-r;
		     printf("El resultado del cateto adyacente al cuadrado es:%d",resul);
		     break;
		
		case 3:
		     printf("Indique el valor del cateto adyacente:");
		     scanf("%d",&ca);
		     printf("Indique el valor del cateto opuesto:");
		     scanf("%d",&co);
		     v=ca+ca;
		     r=co*co;
		     resul=v+r;
		     printf("El resultado de la hipotenusa al cuadrado es:%d",resul);
		break;	
		default:
			printf("La opcion no es reconocida,porfavor intente de nuevo.");
	}

}
