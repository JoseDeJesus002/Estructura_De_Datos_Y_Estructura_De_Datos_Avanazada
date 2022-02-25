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
		case 1:
			if(op=1){
				a=a+1;
				dato=a;
			}
			cout<< "\n";
			cout<< "\n Tu numero de ficha es: "<<dato<<endl;
			cout<< "\n";
			encolar( q, dato );
			cout<<"Espera a que te llamen";
			break;
			
		case 2:
			cout<< "\n";
			x = desencolar( q );
			cout<<"\n\n\t\tEl numero de ficha "<< x <<" a sido atendido\n\n";
			break;
			
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

