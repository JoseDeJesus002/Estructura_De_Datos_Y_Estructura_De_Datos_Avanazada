#include <iostream>
#include <cstddef>
#include "pilas.h"
using namespace std;

namespace pilasavitch
{
	//usa cstddef
	pila::pila( ) : superior(NULL)
	{
		//cuerpo vacio de manera intencional
	}
	
	
	//usa cstddef
	pila::pila(const pila& una_pila)
	{
		if (una_pila.superior == NULL)
			superior = NULL;
		else
		{
			PilaEstructuradaPtr temp = una_pila.superior;
			
			PilaEstructuradaPtr fin;
			fin = new PilaEstructurada;
			fin->datos = temp->datos;
			superior = fin;
			
			temp = temp->enlace;
			while (temp != NULL)
			{
				fin->enlace = new PilaEstructurada;
				fin = fin->enlace;
				fin->datos = temp->datos;
				temp = temp->enlace;
			}
			fin->enlace = NULL;
			
		}
	}
	
	
	pila::~pila( ) 
	{
		char siguiente;
		while (! vacia( ))
			siguiente = saca( ); //saca llama a delete
		
	}
	
	//usa cstddef
	bool pila::vacia( ) const
	{
		return (superior == NULL);
		
	}
	
	//usa cstddef
	void pila::mete(char el_simbolo)
	{
		PilaEstructuradaPtr temp_ptr;
		temp_ptr = new PilaEstructurada;
		
		temp_ptr-> datos = el_simbolo;
		
		temp_ptr->enlace = superior;
		superior = temp_ptr;
	}
	
	//usa iostream
	
	char pila::saca( )
	{
		if (vacia( ))
		{
			cout<<"Error: no se puede sacar de una pila vacia.";
			exit(1);
		}
		char resultado = superior->datos;
		PilaEstructuradaPtr temp_ptr;
		temp_ptr = superior;
		superior = superior->enlace;
		
		delete temp_ptr;
		
		return resultado;
		
	}//pilasavitch
}
