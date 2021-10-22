#include <stdio.h>
#include<conio.h >
int arr[10]={2, 3, 4, 5, 9, 19, 300, 29, 4, 1};
void ordena (int *p, int N);
int compara (int *m, int *n);
int main()
{
int i=0;
for (i=0; i < 10; i ++)
{
printf("[ %d ] ", arr[i]);
}
ordena(arr, 10);
printf("\n");
for (i=0; i < 10; i ++)
{
printf("[ %d ] ", arr[i]);
}
getch();
return 0;
}
void ordena (int *p, int N)
{
int i, j, t; 
for (i=N-1;i>=0;i--)
{
for (j=1;j<=i;j++)
{
if (compara(&p[j-1],&p[j]))
{
t = p[j-1];
p[j-1]= p[j];
p[j] = t;
}
}
}
}int compara(int *m, int *n)
{
return (*m >*n);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>  
void imprime(int);  
void imprime2(int);
int main()          
{
int n=0;            
printf("Indica el numero limite   ");   
scanf("%d", &n);    
imprime(n);  
imprime2(n);       
return 0;           
}                   
void imprime(int b) 
{
int a,c;            
for(a=0; a<=b; a++) 
{
    for(c=1; c<=a; c++)      
        printf("%d\t", c);   
 printf("\n");              
}
}

void imprime2(int z)
{
int v,g;            
for(v=z-1;v>=0;v--) 
{
    for(g=1; g<v; g++)      
        printf("%d\t", g+1);   
 printf("\n"); 
}
}
	

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>  
void imprime(int); 
void imprime2(int);
int main()          
{
int n=0;            
printf("Indica el numero limite ");   
scanf("%d", &n);    
imprime(n);   
imprime2(n);      
return 0;           
}                   
void imprime(int b) 
{
int a,c;            
for(a=0; a<=b; a++) 
{
    for(c=1; c<=a; c++)      
        printf("%d\t", c);   
    printf("\n");               
}
}
void imprime2(int n)
{
int i,j,h;            
for(i=1; i<=n; i++) {
	for(j=n; j>i; j--){
		printf ("\t");
	}
	for(h=i; h>0; h--){
		printf("%d\t", h);
	}
	printf("\n");
  }
}
