#include <iostream>
#include <list>
using namespace std;
void mostrar(list<string> & frutas_);
main()
{
//lista
list <string> frutas;
//iterador
list <string>::iterator puntero;
//Agreegar elementos a una lista

frutas.push_back("Pera");
frutas.push_back("Mango");
frutas.push_back("Uva");
frutas.push_back("Guayaba");
frutas.push_back("Melon");
frutas.push_back("Sandia");

//Tamaño de la lista
cout<<"El tamaño es:"<<frutas.size();
frutas.pop_back();
cout<<"\nEl tamaño es:"<<frutas.size();
frutas.pop_back();
cout<<"\nEl tamaño es:"<<frutas.size();

puntero=frutas.begin();
cout<<"\nFrente: "<<*puntero;

mostrar(frutas);
}

void mostrar(list<string> & frutas_)
{
	list<string>::iterator pos;
	pos=frutas_.begin();
	cout<<"\n------------------"<<endl;
	cout<<"Los elementos de la lista:"<<endl;

	while(pos != frutas_.end())
	{
	cout <<*pos<<endl;
	pos++;
	}
}