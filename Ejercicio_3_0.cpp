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
			gotoxy(40,4);cout<<  " _____________________________________________________________________";
			gotoxy(40,5);cout<< "| REGISTRARSE PARA FICHA                                          | 1 |";              
			gotoxy(40,6);cout<< "|_________________________________________________________________|___|";
			gotoxy(40,7);cout<< "| ATENDER                                                         | 2 |";
			gotoxy(40,8);cout<< "|_________________________________________________________________|___|";
			gotoxy(40,9);cout<< "| SALIR                                                           | 3 |";
			gotoxy(40,10);cout<<"|_________________________________________________________________|___|";
			gotoxy(40,11);cout<<"| INGRESA LA OPCION A REALIZAR                                    |   |";
			gotoxy(40,12);cout<<"|_________________________________________________________________|___|";gotoxy(108,11);cin>>op;
			
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
				cout<<"\n\n\t\tEl numero de ficha "<< x <<" a sido atendido\n\n";
				break;
				
			case 3:
				cout<<"Gracias por tu preferencia";
				break;
			}
			
			cout<<endl<<endl;
			system("pause");  
			system("cls");
			
		}while(op!=3);
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
			
			Sleep(5);
		}
		menu();
		return 0;
	}
		
