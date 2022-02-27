#include<windows.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void gotoxy(int x,int y)
{  
	HANDLE hcon;  
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
	COORD dwPos;  
	dwPos.X = x;  
	dwPos.Y= y;  
	SetConsoleCursorPosition(hcon,dwPos);  
}

struct Nodo
{
	int entrada;
	Nodo *siguiente;
	
};

void menu();
void insertarEntrada(Nodo *&, int);
void mostrarTotal(Nodo *);

Nodo *lista=NULL;

int main()
{
	for(int a=40;a<=75;a++){
		system("color 6");
		
		int d=115;
		d=d-a;
		gotoxy(40,6);cout<<"           BIENVEDO A CINEMEX        ";
		gotoxy(40,7);cout<<"/////////////////////////////////////";
		gotoxy(a,8);cout<<"/";
		gotoxy(d,9);cout<<"/";
		gotoxy(40,10);cout<<"////////////////////////////////////";
		
		Sleep(5);
	}
	menu();
	
	system("pause");
	return 0;
	
}

void menu()
{
	int op, bol,b,a=0;
	int num=1;
	
	do{
		
		b:
			system("cls");
		gotoxy(5,4);cout<< " _____________________________________________________________________";
		gotoxy(5,5);cout<< "| VENTA DE BOLETOS                                                | 1 |";              
		gotoxy(5,6);cout<< "|_________________________________________________________________|___|";
		gotoxy(5,7);cout<< "| MOSTRAR TOTAL DE BOLETOS VENDIDOS                               | 2 |";
		gotoxy(5,8);cout<< "|_________________________________________________________________|___|";
		gotoxy(5,9);cout<< "| SALIR                                                           | 3 |";
		gotoxy(5,10);cout<<"|_________________________________________________________________|___|";
		gotoxy(5,11);cout<<"| INGRESA LA OPCION A REALIZAR                                    |   |";
		gotoxy(5,12);cout<<"|_________________________________________________________________|___|";gotoxy(73,11);cin>>op;
		
		
		switch(op)
		{
			
		case 1: 
			cout<<"\n";
			cout<<"\n";
			if(op=1){
				a=a+1;
				num=a;
			}
			cout<<"\nEl Boleto "<<num<<" con precio MXN de: ";
			insertarEntrada(lista, bol);
			system("pause");
			break;
		case 2:			
			cout<<"\n";
			cout<<"\n";
			if(op=2){
				a=a+1;
				num=a;
			}
			mostrarTotal(lista);
			system("pause");
			break;
		case 3: cout<<"\nGracias por su preferencia vuelva pronto\n";
		system("pause");
		break;
		}
		system("cls");
	} while(op != 3);
}

void insertarEntrada(Nodo *&lista, int e)
{
	e=60;
	Nodo *nuevo_nodo= new Nodo();
	nuevo_nodo->entrada=e;
	
	Nodo *aux1=lista;
	Nodo *aux2;
	
	while(aux1 !=NULL)
	{
		aux2=aux1;
		aux1 = aux1->siguiente;
	}
	if (lista==aux1)
	{
		lista=nuevo_nodo;
	}
	else
	{
		aux2->siguiente=nuevo_nodo;
		nuevo_nodo->siguiente = aux1;
	}
	cout<<e<<"\n ha sido comprado correctamente \n";
	
}

void mostrarTotal(Nodo *lista)
{
	Nodo *actual =new Nodo();
	actual = lista;
	int n=0;
	while(actual != NULL)
	{
		n=n+1;
		
		cout<<"Boleto "<<n<<" MXN ";
		cout<<actual->entrada;
		
		if(n<=3){
			cout<<"  Ingreso permitido";
		}else{
			cout<<"  Ingreso no permitido";
		}
		
		cout<<" \n";
		
		actual = actual->siguiente;
	}
}
