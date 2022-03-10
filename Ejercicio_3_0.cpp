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
	
<<<<<<< HEAD
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
	
	void muestraCola( struct cola q )
	{
		struct nodo *aux;
		
		aux = q.delante;
		
		while( aux != NULL )
		{
			cout<<"   "<< aux->nro ;
			aux = aux->sgte;
		}    
	}
	
	void menu()
=======
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
	struct cola q;
	
	q.delante = NULL;
	q.atras   = NULL;
	
	int dato; 
	int op;    
	int x ;    
	int a =0;
	
	do
>>>>>>> 3797396910821159b0222528e44ef61fc7629538
	{
		b:
			system("cls");
		gotoxy(5,4);cout<<  " _____________________________________________________________________";
		gotoxy(5,5);cout<< "| REGISTRARSE PARA FICHA                                          | 1 |";              
		gotoxy(5,6);cout<< "|_________________________________________________________________|___|";
		gotoxy(5,7);cout<< "| ATENDER                                                         | 2 |";
		gotoxy(5,8);cout<< "|_________________________________________________________________|___|";
		gotoxy(5,9);cout<< "| SALIR                                                           | 3 |";
		gotoxy(5,10);cout<<"|_________________________________________________________________|___|";
		gotoxy(5,11);cout<<"| INGRESA LA OPCION A REALIZAR                                    |   |";
		gotoxy(5,12);cout<<"|_________________________________________________________________|___|";gotoxy(73,11);cin>>op;
		
		switch(op)
		{
<<<<<<< HEAD
			b:
				system("cls");
			gotoxy(5,4);cout<<  " _____________________________________________________________________";
			gotoxy(5,5);cout<< "| REGISTRARSE PARA FICHA                                          | 1 |";              
			gotoxy(5,6);cout<< "|_________________________________________________________________|___|";
			gotoxy(5,7);cout<< "| ATENDER                                                         | 2 |";
			gotoxy(5,8);cout<< "|_________________________________________________________________|___|";
			gotoxy(5,9);cout<< "| MOSTRAR FICHAS EN ESPERA                                        | 3 |";
			gotoxy(5,10);cout<<"|_________________________________________________________________|___|";
			gotoxy(5,11);cout<<"| SALIR                                                           | 4 |";
			gotoxy(5,12);cout<<"|_________________________________________________________________|___|";
			gotoxy(5,13);cout<<"| INGRESA LA OPCION A REALIZAR                                    |   |";
			gotoxy(5,14);cout<<"|_________________________________________________________________|___|";gotoxy(73,13);cin>>op;
			
			switch(op)
			{
			case 1:
				if(op=1){
					a=a+1;
					dato=a;
				}
				cout<< "\n Tu numero de ficha es: "<<dato<<endl;
				cout<< "\n";
				encolar( q, dato );
				cout<<"Espera a que te llamen";
				break;
			case 2:
				
				x = desencolar( q );
				cout<<"\n La ficha "<< x <<" fue atendido\n\n";
				break;
				
			case 3:
				cout << "\n\n Las fichas en espera son:\n\n";
				if(q.delante!=NULL) muestraCola( q );
				else   cout<<"\n\n\tCola vacia...!"<<endl;
				break;
				
			case 4:
				cout<<"Gracias por tu preferencia";
				break;
=======
		case 1:
			if(op=1){
				a=a+1;
				dato=a;
>>>>>>> 3797396910821159b0222528e44ef61fc7629538
			}
			cout<< "\n";
			cout<< "\n Tu numero de ficha es: "<<dato<<endl;
			cout<< "\n";
			encolar( q, dato );
			cout<<"Espera a que te llamen";
			break;
			
<<<<<<< HEAD
			cout<<endl<<endl;
			system("pause");  
			system("cls");
			
		}while(op!=4);
	}
	
	int main(){
		for(int a=40;a<=75;a++){
			system("color A");
			
			int d=115;
			d=d-a;
			gotoxy(40,6);cout<<"               BIENVEDO              ";
			gotoxy(40,7);cout<<"/////////////////////////////////////";
			gotoxy(a,8);cout<<"/";
			gotoxy(d,9);cout<<"/";
			gotoxy(40,10);cout<<"////////////////////////////////////";
=======
		case 2:
			cout<< "\n";
			x = desencolar( q );
			cout<<"\n\n\t\tEl numero de ficha "<< x <<" a sido atendido\n\n";
			break;
>>>>>>> 3797396910821159b0222528e44ef61fc7629538
			
		case 3:
			cout<< "\n";
			cout<<"Gracias por tu preferencia";
			break;
		}
		
		cout<<endl<<endl;
		system("pause");  
		system("cls");
		
	}while(op!=3);
}

int main(){
	for(int a=5;a<=40;a++){
		system("color B");
		
		gotoxy(5,6);cout<<"               BIENVEDO              ";
		gotoxy(5,7);cout<<"/////////////////////////////////////";
		gotoxy(a,8);cout<<"/";
		gotoxy(5,9);cout<<"////////////////////////////////////";
		
		Sleep(10);
	}
	menu();
	return 0;
}

