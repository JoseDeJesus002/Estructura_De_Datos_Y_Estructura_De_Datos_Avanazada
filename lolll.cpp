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
	string nro;
	struct nodo *sgte;
};

struct cola
{
	nodo *delante;
	nodo *atras  ;
};

void encolar( struct cola &q, string valor )
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

string desencolar( struct cola &q )
	
{
	string dat ;
	struct nodo *aux ;
	
	aux = q.delante;      
	dat = aux->nro;
	q.delante = (q.delante)->sgte;
	delete(aux);          
	
	return dat;
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

void vaciaCola( struct cola &q)
{
	struct nodo *aux;
	
	while( q.delante != NULL)
	{
		aux = q.delante;
		q.delante = aux->sgte;
		delete(aux);
	}
	q.delante = NULL;
	q.atras   = NULL;
	
}

void menu()
{
	struct cola q;
	
	q.delante = NULL;
	q.atras   = NULL;
	
	string dato; 
	int op;    
	string x ;    
	int h,a;
	
	
	do
	{
	
	a:
		system("cls");
	gotoxy(40,4);cout<<  " _____________________________________________________________________";
	gotoxy(40,5);cout<< "| registro de ficha :                                             | 1 |";              
	gotoxy(40,6);cout<< "|_________________________________________________________________|___|";
	gotoxy(40,7);cout<< "| para pasar el turno de la ficha:                                | 2 |";
	gotoxy(40,8);cout<< "|_________________________________________________________________|___|";
	gotoxy(40,9);cout<< "| para mostrar:                                                   | 3 |";
	gotoxy(40,10);cout<<"|_________________________________________________________________|___|";
	gotoxy(40,11);cout<<"| para salir precione:                                            | 4 |";
	gotoxy(40,12);cout<<"|_________________________________________________________________|___|";
	gotoxy(40,13);cout<<"|                                                                 |   |";
	gotoxy(40,14);cout<<"|_________________________________________________________________|___|";gotoxy(108,11);cin>>op;
		
		switch(op)
		{
		case 1:
			h=h+1;
			cout<< "\n Ingresa tu nombre para el registro: "; cin>> dato;
			encolar( q, dato );
			
			cout<<"\n Tu Ficha es: " <<h<<endl;
			cout<<"\nEspera tu turno!!!"<<endl;
			break;
			
			
		case 2:
			
			x = desencolar( q );
			cout<<"\nNombre "<< x <<"\nCon numero de ficha: "<< h <<" a sido atendido!!\n\n";
			break;
			
			
		case 3:
			
			cout << "\n\n MOSTRANDO ORDEN\n\n";
			if(q.delante!=NULL){
			muestraCola( q ); cout<<h<<endl;
			} 
			else{
				cout<<"\n\n\tNo hay fichas vacia...!"<<endl;
			}   
			break;
		default:
			printf("Gracias por su preferencia\n");
		break;
		cout<<endl<<endl;
	}
	system("pause"); 
	system("cls");
	}while(op!=4);
	
	
}

int main()
{
		for(int a=40;a<=75;a++)
	{
		system("color A");
		
		int d=115;
		d=d-a;
		gotoxy(40,6);cout<<"               BIENVEDO              ";
		gotoxy(40,7);cout<<"/////////////////////////////////////";
		gotoxy(a,8);cout<<"/";
		gotoxy(d,9);cout<<"/";
		gotoxy(40,10);cout<<"////////////////////////////////////";
		
		
		Sleep(5);
	}
	menu();
	
	

	
	return 0;
}
