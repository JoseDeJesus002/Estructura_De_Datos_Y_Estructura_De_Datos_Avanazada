#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
	string dato;
	Nodo *siguiente;
};
void menu();
void insertarLista(Nodo *&,string);
void mostrarLista(Nodo *);
void buscarLista(Nodo *,string);
void eliminarNodo(Nodo *&,string);
Nodo *lista=NULL;

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	int x;
	string juegos;
	do{	
	cout<<"\t ::MENU:: \n";
	cout<<"1. Insertar juego\n"; 
	cout<<"2. Mostrar elementos de la lista\n";
	cout<<"3. Buscar elemento en lista\n";
	cout<<"4. Eliminar elemento\n";
	cout<<"5. Salir con 0\n";
	cout<<"Ingrese la opcion:\n ";
	cin>>x;

switch(x){
	case 1:
	cout<<"Nombre de juego: ";
	cin>>juegos;
	insertarLista(lista,juegos);
	cout<<"\n";
	//system("pause");
	break;
case 2:
	mostrarLista(lista);
	cout<<"\n";
	system("pause");
	break;
case 3: cout<<"\nDigite un juego a buscar: ";
	cin>>juegos;
	buscarLista(lista,juegos);
	cout<<"\n";
	system("pause");
	break;
case 4: cout<<"\nDigite el elemento que desee eliminar: ";
	cin>>juegos;
	eliminarNodo(lista,juegos);
	cout<<"\n";
	system("pause");
}
system("cls");
}while(x!=0);
}


void insertarLista(Nodo *&lista,string n){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato = n;
	
	Nodo *aux1 =lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if(lista == aux1){
		lista=nuevo_nodo;
	}
	else{
		aux2->siguiente=nuevo_nodo;
	}
	
	nuevo_nodo->siguiente=aux1;
	
	cout<<"\n Elemento agregado correctamente"<<endl;
}

void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	while(actual != NULL){
		cout<<actual->dato<<"->\n";
		actual= actual->siguiente;
	}
}

void buscarLista(Nodo *lista,string n){
	bool band = false;
	Nodo *actual = new Nodo();
	actual = lista;
	while((actual != NULL) &&(actual->dato <=n )){
		if(actual->dato==n){
			band = true;
		}
		actual = actual ->siguiente;
	}
	if(band == true){
		cout<<"Elemento "<<n<<" Si a sido encontrado en lista \n";
	}else{
		cout<<"Eleemento "<<n<<" No a sido encontrado en lista \n";
	}
}

void eliminarNodo(Nodo *&lista,string n){
	//preguntar si la lista esta vacia
	if(lista != NULL){
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		
		aux_borrar = lista;
		//recorrer lista
		while((aux_borrar != NULL) &&(aux_borrar ->dato !=n )){
			anterior = aux_borrar;
			aux_borrar = aux_borrar->siguiente;
		}
	if(aux_borrar == NULL){
		cout<<"Elemento no ha sido encontrado";
	}
	//El primer elemento es el que vamos a eliminar
	else if(anterior == NULL){
		lista = lista->siguiente;
		delete aux_borrar;
	}
	//elemento esta en la lista,pero no es el primer nodo
	else{
		anterior->siguiente =aux_borrar->siguiente;
		delete aux_borrar;
	}
}
}