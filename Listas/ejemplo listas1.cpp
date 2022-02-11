#include<iostream>
#include<list>
using namespace std;
void mostrar(list<string> & listanueva);

main()
{
	//lista
	list <string> frutas;
	
	
	/*AGREGAR ELEMENTOS A UNA LISTA*/
	frutas.push_back("Manzana");
	frutas.push_back("Pera");
	frutas.push_back("Mango");
	frutas.push_back("Guayaba");
	frutas.push_back("Melon");
	frutas.push_back("Sandia");
	frutas.push_back("Papaya");
	
	//TAMAÑO DE LA LISTA
	cout<<"el tamaño de la lista es: "<<frutas.size();
	
	frutas.pop_back();
	//TAMAÑO DE LA LISTA
	cout<<"\nel tamaño de la lista es: "<<frutas.size();
	
	//iterador
	list <string>::iterator puntero;
	
	puntero=frutas.begin();
	cout<<"\nFrente: "<<*puntero;
	
	
	mostrar(frutas);
	
}
void mostrar(list<string> & listanueva)
{
	list<string>::iterator pos;
	pos= listanueva.begin();
	cout<<"\n-----------------"<<endl;
	cout<<"Los elementos de la lista: "<<endl;
	while(pos != listanueva.end())
	{
		cout<<*pos<<endl;
		pos++;
	}
		
}

