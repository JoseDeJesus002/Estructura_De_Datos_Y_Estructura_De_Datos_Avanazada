#include <iostream>
using namespace std;

struct nodo
{
	int nro;
	struct nodo *sgte;
};

struct cola
{
	nodo *delante;
	nodo *atras  ;
};

void encolar( struct cola &q, int valor )
{
	struct nodo *aux = new(struct nodo);
	
	aux->nro = valor;
	aux->sgte = NULL;
	
	if( q.delante == NULL)
		q.delante = aux;   
	else
		(q.atras)->sgte = aux;
	
	q.atras = aux;       
}    

int desencolar( struct cola &q )
	
{
	int num ;
	struct nodo *aux ;
	
	aux = q.delante;      
	num = aux->nro;
	q.delante = (q.delante)->sgte;
	delete(aux);          
	
	return num;
}  


void menu()
{
	cout<<"\n Menu \n";
	cout<<" 1. Asignar Ficha                              "<<endl;
	cout<<" 2. Atender                         "<<endl;
	cout<<" 3. Salir                        "<<endl;
	
	cout<<"\n INGRESE OPCION: ";
}

int main()
{
	struct cola q;
	
	q.delante = NULL;
	q.atras   = NULL;
	
	
	int dato; 
	int op;    
	int x ;    
	int a =0;
	
	do
	{
		menu();  cin>> op;
		
		switch(op)
		{
		case 1:
			if(op=1){
			a=a+1;
			dato=a;
			}
			cout<< "\n Tu numero de ficha es: "<<dato;
			encolar( q, dato );
			cout<<"Espera....";
			break;
			
			
		case 2:
			
			x = desencolar( q );
			cout<<"\n La ficha "<< x <<" fue atendido\n\n";
			break;
			
		}
		
		cout<<endl<<endl;
		system("pause");  system("cls");
		
	}while(op!=5);
	
	
	return 0;
}
