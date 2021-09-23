#include<stdio.h>
int main(){
	int n1,op,i,j,n,b[100];
 printf("Indique un numero decimal:");
 scanf("%d",&n1);
 printf("¿En que sistema desea combertirlo?\n1)Binario\n2)Hexadecimal\n3)Octal\n");
 scanf("%d",&op);
 switch(op){
 	case 1:
 		n=n1;
 		i=0;
 		while(n>0){
 			b[i]=n % 2;
 			n /=2;
 			++i;
		 }
		 for(j=i-1;j>=0;--j)
		 printf("%d",b[j]);
		 printf("\n");
 		break;
 		
 	case 2:
 		n=n1;
 		i=0;
 		while(n>0){
 			b[i]=n % 16;
 			n /=16;
 			++i;
		 }
		 for(j=i;j>=0;--j)
		 //printf("%d",b[j]);
		 //printf("\n");	
		 if (b[j]==10){
		 	printf("A");
		 }
		 else if(b[j]==11){
		 	printf("B");
		 }
		 else if(b[j]==12){
		 	printf("C");
		 }
		 else if(b[j]==13){
		 	printf("D");
		 }
		 else if(b[j]==14){
		 	printf("E");
		 }
		 else if(b[j]==15){
		 	printf("F");
		 }
 		break;
 	case 3:
 			n=n1;
 		i=0;
 		while(n>0){
 			b[i]=n % 8;
 			n /=8;
 			++i;
		 }
		 for(j=i-1;j>=0;--j)
		 printf("%d",b[j]);
		 printf("\n");	
 		break;
 		default:
 		printf("Opcion no reconocida.");
 }	
}
