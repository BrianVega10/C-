#include<iostream>
#include <conio.h> 
#include <math.h>
using namespace std;
int main(){
	int saldo_inicial=1000;
	int saldo,reintegro,opcion,a;
	cout<<"\tbienvenido a su cajero virtual";
	cout<<"\nescoja una opcion:";
	cout<<"\n1.-Ingreso en cuenta";
	cout<<"\n2.-Reintegro";
	cout<<"\n3.-Ver saldo de cuenta";
	cout<<"\n0.-Salri";
	cin>>opcion;
	
	if(opcion==1){
	cout<<"\nIngrese la cantidad a deppocitar:";
	cin>>a;
	saldo=saldo_inicial+a;
	cout<<"\nCantidad disponoble en cueta:"<<saldo;
}
	else if(opcion==2){
		cout<<"\n¿Cuanta cantidad desea retirar:?";
		cin>>reintegro;
		if(reintegro>1000){
			cout<<"La cantidad es mayor a mil dolares:";
			cin>>reintegro;
			}
			saldo= saldo_inicial-reintegro;
			cout<<"\nCantidad diponible en cuenta es:"<<saldo;
		}
		else if(opcion==3){
			cout<<"\nLa cantidad disponble en cueta es de:"<<saldo_inicial;
	
		}
		else if(opcion==0){
			cout<<"Gracias por peferirnos";
		}
		else{
			cout<<"Se equivoco de opcion de menu";
		}
		cin.get();
		return 0;
		
	}

