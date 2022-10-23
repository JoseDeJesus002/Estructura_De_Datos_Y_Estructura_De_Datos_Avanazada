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
void suprimirCola(Nodo *&,Nodo *&,string&);

int main(){
	
	menu();
	
	
	getch();
	return 0;
}

void menu(){
	int opc;
	string dato;
	Nodo *frente=NULL;
	Nodo *fin =NULL;
	
	do{
		cout<<"...MENU...\n";
		cout<<"1. Registro de Ficha"<<endl;
		cout<<"2. Llamada de turno"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion: "; cin>>opc;
		
		switch (opc){
			case 1: cout<<"\nIngrese el caracter a agregar a la cola: ";
					cin>>dato;
					insertarCola(frente,fin,dato);
					break;
			case 2: cout<<"\nMostrando los elementos de la cola: ";
					while(frente!=NULL){
						suprimirCola(frente,fin,dato);
						if(frente !=NULL){
							cout<<dato<<" , ";
						}
						else{
							cout<<dato<<".";
						}
					}
					cout<<"\n";
					system("pause");
					break;
			case 3: 
					cout<<"\nIngrese el caracter a agregar a la cola: ";
					cin>>dato;
				suprimirCola(frente,fin,dato);
			break;
		}
		system("cls");		
	}while(opc !=4);
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


//funcion para determinar la cola vacia
bool cola_vacia(Nodo *frente){
	return(frente ==NULL)? true: false;
	
}

//quitar elementos de la cola
void suprimirCola(Nodo*&frente,Nodo *&fin,string&n){
	n=frente->dato;
	Nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin =NULL;
		
	}
	else{
		frente= frente->siguiente;
		
	}
	delete aux;
	
}