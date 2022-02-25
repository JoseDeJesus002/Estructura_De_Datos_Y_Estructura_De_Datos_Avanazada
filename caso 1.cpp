#include <iostream>
using namespace std;

struct nodo{
	int nro;
	struct nodo *sgte;
};

typedef nodo *fePila; 

void push( fePila &h, int valor )
{
	fePila aux;
	aux = new(struct nodo);  // apuntamos al nuevo nodo creado
	aux->nro = valor;
	
	aux->sgte = h ;
	h = aux ;
}

int pop( fePila &h )
{
	int num ;
	fePila aux;
	
	aux = h ;
	num = aux->nro;  
	
	h = aux->sgte ;
	delete(aux);
	
	return num;
}

void mostrando_pila( fePila h )
{
	fePila aux;
	aux = h;     
	
	while( aux !=NULL )
	{
		cout<<"\t"<< aux->nro <<endl;
		aux = aux->sgte;
	}    
}

void quitar_pila( fePila &h)
{
	fePila aux;
	
	while( h != NULL)
	{
		aux = h;
		h = aux->sgte;
		delete(aux);
	}
}

void menu()
{
	cout<<"\n\t Bienvenido Al Cine :) \n\n";
	cout<<" 1. Venta De Boleto                                 "<<endl;
	cout<<" 2. DESAPILAR                             "<<endl;
	cout<<" 3. Mostrar Boletos Vendidos:                           "<<endl;
	cout<<" 4. QUITAR PILA                         "<<endl;
	cout<<" 5. SALIR                                 "<<endl;
	
	cout<<"\n INGRESE OPCION: ";
}

int main()
{
	fePila h = NULL;  // creando pila
	int dato;
	int opccion;
	int x ; // numero que devuelve la funcon pop
	
	system("color 0b");
	
	do
	{
		menu();  cin>> opccion;
		
		switch(opccion)
		{
		case 1:
			
			cout<< "\n NUMERO A APILAR: "; cin>> dato;
			push( h, dato );
			cout<<"\n\n\t\tNumero " << dato << " apilado...\n\n";
			break;
			
			
		case 2:
			
			x = pop( h );
			cout<<"\n\n\t\tNumero "<< x <<" desapilado...\n\n";
			break;
			
			
		case 3:
			
			cout << "\n\n MOSTRANDO PILA\n\n";
			if(h!=NULL)
				mostrando_pila( h );
			else
				cout<<"\n\n\tPila vacia..!"<<endl;
			break;
			
			
		case 4:
			
			quitar_pila( h );
			cout<<"\n\n\t\tPila eliminada...\n\n";
			break;
			
		}
		
		cout<<endl<<endl;
		system("pause");  system("cls");
		
	}while(opccion!=5);
	
	
	return 0;
}
