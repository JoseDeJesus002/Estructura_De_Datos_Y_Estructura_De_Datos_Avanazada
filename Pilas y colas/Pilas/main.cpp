#include <iostream>
#include "pilas.h"
using namespace std;
using namespace pilasavitch;

int main( )
{
	pila s;
	char siguiente, resp;
	
	do
	{
		cout<< "escriba una palabra: ";
		cin.get(siguiente);
		while (siguiente != '\n')
		{
			s.mete(siguiente);
			cin.get(siguiente);
		}
		
		cout<< "escriba al reves es: ";
		while (! s.vacia())
			cout<<s.saca();
		cout<<endl;
		
		cout<< "de nuevo? (s/n): ";
		cin >> resp;
		cin.ignore(10000, '\n');
		
	}while (resp != 'n' && resp != 'N');
	
	
	return 0;
}
