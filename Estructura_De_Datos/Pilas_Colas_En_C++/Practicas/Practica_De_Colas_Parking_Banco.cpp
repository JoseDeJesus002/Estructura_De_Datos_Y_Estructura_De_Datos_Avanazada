
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;


struct Nodo{
	string dato;
	Nodo *siguiente;	
	
};

//prototipos de funciones
void menu();
void insertarCola(Nodo *&,Nodo *&, string);
bool cola_vacia(Nodo*);
void mostrarcola(Nodo *);

int main(){
	
	menu();
	
	
	getch();
	return 0;
}
//funcion para dar a elegir una de las funciones a realizar el programa 
void menu(){
	int opc;
	string dato;
	Nodo *frente=NULL;
	Nodo *fin =NULL;
	
	do{
		cout<<"BIENVENIDO AL BANCO\n";
		cout<<"1. Recoger Ficha "<<endl;
		cout<<"2. Llamar Ficha : "<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Eliga una opcion: "; cin>>opc;
		
		switch (opc){
			case 1: cout<<"\nIngresa tu nombre para el registro: ";
					cin>>dato;
					insertarCola(frente,fin,dato);
					break;
			case 2: cout<<"\nMostrando los autos con matriculas: \n";
					mostrarcola(frente);
					cout<<"\n";
					system("pause");
					break;
			case 3: break;
		}
		system("cls");		
	}while(opc !=3);
}



//para insertar datos a la cola
void insertarCola(Nodo *&frente,Nodo *&fin,string n){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	
	if(cola_vacia(frente)){
	
	frente =nuevo_nodo;
}
else{
	fin->siguiente =nuevo_nodo;
}

fin = nuevo_nodo;

}


//funcion para determinar si la cola esta vacia
bool cola_vacia(Nodo *frente){
	return(frente ==NULL)? true: false;
	
}
//mostrar elementos de la cola

void mostrarcola(Nodo *aux){
 while(aux!=NULL){
  cout<<"Matricula es: "<<aux->dato<<endl;
  aux = aux->siguiente;
 }
}