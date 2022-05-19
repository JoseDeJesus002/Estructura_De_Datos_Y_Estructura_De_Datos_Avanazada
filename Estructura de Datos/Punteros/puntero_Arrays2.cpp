#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//prototipo de funcion
void notas();
void mostrar();
int numCalif,*calif;


int main(){
	
	notas();
	mostrar();
	
	delete[] calif; //liberar el espacio en bytes utilizados anterirormente
	
	getch();
	return 0;
}

void notas(){
	cout<<"Digite el numero de calficaciones: ";
	cin>>numCalif;
	
	calif=new int[numCalif];//crear arreglo
	
	for(int i=0;i<numCalif;i++){
		cout<<"ingrese una nota: ";
		cin>>calif[i];
	}
}

void mostrar(){
	cout<<"\n\nMostrando notas del usuario:\n";
	for(int i=0;i<numCalif;i++){
		cout<<calif[i]<<endl;
	}
}