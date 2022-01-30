#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main(){
	int numeros[5][4];
	int fila, columna;
	int suma=0;
	cout<<"Bienvenido"<<"\n"<<"Por favor ingrese los numeros que quiera que esten en la tabla"<<endl;
	
	//Va ingresando los datos a el vector.
	for(fila=0;fila<4;fila++){
		for (columna=0;columna<3;columna++){
			cout<<"Digite un numero ["<<fila<<"] ["<<columna<<"]:";    
			cin>>numeros[fila][columna];
		}
	}
	//Se muestra en pantalla lo datos.
	
	cout<<"\n";
	cout<<"El vector es: "<<endl;
	cout<<"\n";
	
	for( fila=0;fila<4;fila++){
		for(columna=0;columna<3;columna++){
			cout<<numeros [fila][columna];
		}
		cout<<"\n";
	}
	//se realiza la suma de el vector.
	for(fila=0;fila<4;fila++){
		for(columna=0;columna<3;columna++){
			suma=suma+numeros[fila][columna];
		}
	}
	
	//se muestra la suma en pantalla.
	cout<<"\n";
	cout<<"la suma de los elementos es: "<<suma<<endl;
	getch();
	return 0;
}