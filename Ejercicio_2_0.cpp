#include<windows.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void gotoxy(int x,int y){  
	HANDLE hcon;  
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
	COORD dwPos;  
	dwPos.X = x;  
	dwPos.Y= y;  
	SetConsoleCursorPosition(hcon,dwPos);  
}
	
struct Nodo{
	string dato;
	Nodo *siguiente; 
};

void menu();
void insertarLibros(Nodo *&,string);
void mostrarLibros(Nodo *);
void eliminarLibros(Nodo *&,string);
void eliminarTodo(Nodo *&,string &);

Nodo *lista = NULL;
	
void menu(){
		
	int op;
	string dato;
		
	do{
		b:
			system("cls");
		gotoxy(5,4);cout<< " _____________________________________________________________________";
		gotoxy(5,5);cout<< "| INSERTAR UN LIBRO                                               | 1 |";              
		gotoxy(5,6);cout<< "|_________________________________________________________________|___|";
		gotoxy(5,7);cout<< "| ELIMINAR UN LIBRO                                               | 2 |";
		gotoxy(5,8);cout<< "|_________________________________________________________________|___|";
		gotoxy(5,9);cout<< "| MOSTRAR LIBROS                                                  | 3 |";
		gotoxy(5,10);cout<<"|_________________________________________________________________|___|";
		gotoxy(5,11);cout<<"| QUITAR LOS LIBROS DEL INVENTARIO                                | 4 |";
		gotoxy(5,12);cout<<"|_________________________________________________________________|___|";
		gotoxy(5,13);cout<<"| SALIR                                                           | 5 |";
		gotoxy(5,14);cout<<"|_________________________________________________________________|___|";
		gotoxy(5,15);cout<<"| INGRESA LA OPCION A REALIZAR                                    |   |";
		gotoxy(5,16);cout<<"|_________________________________________________________________|___|";gotoxy(73,15);cin>>op;
			
		switch(op){
		case 1:
			cout<<"\n";
			cout<<"\nNombre del libro a ingresar: ";
			cin>>dato;
			insertarLibros(lista,dato);
			cout<<"\n";
			system("pause");
			break;
				
		case 2:
			cout<<"\n";
			cout<<"\nDigite el nombre del libro que desea eliminar: ";
			cin>>dato;
			eliminarLibros(lista,dato);
			cout<<"\n\n A sido eliminado correctamente";
			cout<<"\n";
			system("pause");
			break;
			
		case 3: 
			cout<<"\n";
			mostrarLibros(lista);
			cout<<"\n";
			system("pause");
			break;
			
		case 4: 
			cout<<"\n\n Se han quitado los Libros\n\n";
			while(lista != NULL){ 
				eliminarTodo(lista,dato);
				cout<<dato<<", ";
			}
			cout<<"\n";
			system("pause");
			break;
		}
		system(" cls ");
	} while(op != 5);
}
	
void insertarLibros(Nodo *&lista,string n){
	Nodo *nuevo_nodo = new Nodo(); 
	nuevo_nodo->dato = n;
			
	Nodo *aux1 = lista;
	Nodo *aux2;
			
	while((aux1 != NULL) && (aux1->dato < n)){
		aux2 = aux1;
		aux1 =  aux1->siguiente;
	}
			
	if (lista == aux1){
		lista = nuevo_nodo;		
	}else{
		aux2->siguiente = nuevo_nodo;
	}
	
	nuevo_nodo->siguiente = aux1;
			
	cout<<"\n\n\tEl Libro  "<<n<<" a sido insertado correctamente\n";			
}

void mostrarLibros(Nodo *lista){
	cout<<"\n\n Libros insertados"<<endl;
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual != NULL){
		cout<<actual->dato<<", ";
		actual = actual->siguiente;
	}
}
	
void eliminarLibros(Nodo *&lista,string n){
	if(lista != NULL){
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		aux_borrar = lista;
						
		while((aux_borrar != NULL) && (aux_borrar->dato != n)){
			anterior = aux_borrar;
			aux_borrar = aux_borrar->siguiente;
		}
						
		if(aux_borrar == NULL){
			cout<<"el libro no ha sido encontrado";
		}
						
		else if(anterior == NULL){
			lista = lista->siguiente;
			delete aux_borrar;
		}else{
			anterior->siguiente = aux_borrar->siguiente;
			delete aux_borrar;
		}
	}
}

void eliminarTodo(Nodo *&lista,string &n){
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->siguiente;
	delete aux;
}
	
int main(){
	for(int a=40;a<=75;a++){
		system("color B");
			
		int d=115;
		d=d-a;
		gotoxy(40,6);cout<<"             BIENVENIDO              ";
		gotoxy(40,7);cout<<"/////////////////////////////////////";
		gotoxy(a,8);cout<<"/";
		gotoxy(d,9);cout<<"/";
		gotoxy(40,10);cout<<"////////////////////////////////////";
		
		Sleep(5);
	}
	menu();
	getch();
	return 0;
}
