#include<stdio.h>
void ed(int* n){
	int y=* n;
	y=(y+2)/2+2-(3*y);
	*n=y;
}
int main(){
	int x=10;
	ed(&x);
	printf("%d\n",x);
	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

using namespace std;
void intercambia(int *,int *);

int main(void){
	int a=7,b=8;
	printf("a=%d b=%d\n",a,b);
	intercambia(&a,&b);
	printf("a=%d b=%d\n",a,b);
	
}
void intercambia(int *x,int*y){
	int z;
	z=*x;
	*x=*y;
	*y=z;
	
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void funcion(int *vec);
void leer(int *vec);
int  main(){
	int vec[3];
	funcion(vec);
	leer(vec);
	
	system("pause");
	return 0;
}
void funcion(int *vec){
	int i;
	
	for(i=0;i<3;i++){
		printf("Introduce un valor para la posicion %i:",i+1);
		scanf("%i",(vec+i));
	}
}

void leer(int *vec){
	int i;
	
	
	for(i=0;i<3;i++){
		printf("%i\n",*(vec+i));
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sorteo(int *vec);
void leer(int *vec);

int main(){
int vec[]={0,0,0,0,0,0};

sorteo(vec);
leer(vec);

system("pause");
return 0;	
}

void sorteo(int *vec){
	srand(time(NULL));
	int i,aux;
	
	for(i=0;i<10000;i++){
		aux=rand()%6;
		
		switch(aux){
			case 0:{
				*(vec+aux)+=1;
				break;
			}
			case 1:{
				*(vec+aux)+=1;
				break;
			}
			case 2:{
				*(vec+aux)+=1;
				break;
			}
			case 3:{
				*(vec+aux)+=1;
				break;
			}
			case 4:{
				*(vec+aux)+=1;
				break;
			}
			case 5:{
				*(vec+aux)+=1;
				break;
			}
		}
	}
}
void leer(int *vec){
	int i;
	float x;
	
	
	for(i=0;i<6;i++){
		x=(*(vec+i)*100)/10000.;
		printf("La provavilidad de que el numero %i salga es de:%f\n",i+1,x);
	}
}
