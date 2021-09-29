#include<stdio.h>
void display(int age1, int age2){
	printf("%d\n",age1);
	printf("%d\n",age2);
}

int main(){
	int ageArray[]={19,45,23,78};
	display(ageArray[0],ageArray[1]);
	return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
float suma(float numeros[]);
int main(){
	float resul, numeros[]={1,32,65,7,8.0,8.9};
	resul=suma(numeros);
	printf("Resultado=%.2f",resul);
	return 0;
	
}
float suma(float numeros[]){
float sum=0.0;
for(int i=0;i<6;++i){
sum+=numeros[i];
}
return sum;
}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void displayNumbers(int num[2][2]);
int main(){
	int num[2][2];
	printf("Indique 4 dijitos enteros:\n");
	for(int i=0;i<2;++i){
		for(int j=0;j<2;++j){
			scanf("%d",&num[i][j]);
		}
	}
	displayNumbers(num);
	return 0;
}
void displayNumbers(int num[2][2]){
	printf("Mostrando datos\n");
	for(int i=0;i<2;++i){
		for(int j=0;j<2;++j){
			printf("%d\n",num[i][j]);
		}
	}
}
