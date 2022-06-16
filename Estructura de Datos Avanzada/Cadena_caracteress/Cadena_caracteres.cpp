#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
char nombre[30];
char apellido[30];
char nombre_completo[40];
char cat[40];
int numero;
char cad[40];
float numero2;
char palabra[40];
char palabra1 [40];

void compara_Alfa()
{
	//compara si ambas son iguales
	if(strcmp(nombre,apellido)==0)
	{
		cout<<"Ambas son iguales"<<endl;
	}else if(strcmp(nombre,apellido) != 0)
	{
		cout<<"Ambas palabras son diferentes"<<endl;
	}
}

void compara_Long()
{
	//compara la longitud
	if(strcmp(nombre,apellido) < 0)
	{
		cout<<nombre<<" Es mayor"<<endl;
		
	}else if(strcmp(apellido,nombre) < 0)
	{
		cout<<apellido<<" Es mayor"<<endl;
	}	
}

void ato (){
	numero = atoi(cat);
	cout<<"La cadena fue transformada a valor entero: "<<numero<<endl;
}

void atf (){
	numero2 = atof(cad);
	cout<<"La cadena se tranformo a un valor flotante: "<<numero2<<endl;
}

void palabra_minuscula(){
	strlwr(palabra);
	cout<<"Las palabras se convirtieron a minisicula: "<<palabra<<endl;
}

void palabra_mayuscula(){
	strupr(palabra1);
	cout<<"La palabra se convirtio a mayuscula: "<<palabra1<<endl;
}
void mostrar()
{
	strcpy(nombre_completo,nombre);
	//concatena la cadena
	strcat(nombre_completo,apellido);
	
	cout<<nombre_completo<<endl;	
}
int main()
{
	int opc;
	cout<<"Registro"<<endl;
	
	cout<<"Ingresa tu nombre: ";
	cin.getline(nombre,30,'\n');
	
	cout<<"Ingresa tu apellido: ";
	cin.getline(apellido,30,'\n');
	
	cout<<"Ingresa una palabra en mayuscula: ";
	cin.getline(palabra,40,'\n');
	
	cout<<"Ingresa una palabra en minuscula: ";
	cin.getline(palabra1,40,'\n');
	
	cout<<"Ingresa un numero: ";
	cin.getline(cat,40,'\n');
	
	cout<<"Ingresa un numero en decimal: ";
	cin.getline(cad,40,'\n');
do
{
	cout<<"1. Comparacion Alfabeticamente"<<endl;
	cout<<"2. Comparacion de longitud"<<endl;
	cout<<"3. Mostrar nombre completo"<<endl;
	cout<<"4. Tranformar una cadena a numeros"<<endl;
	cout<<"5. Tranforma una cadena a valor decimal"<<endl;
	cout<<"6. Tranforma una palabra a minuscula"<<endl;
	cout<<"7. Tranforma una palabra a mayuscula"<<endl;
	cout<<"8. Salir"<<endl;
	cout<<"Ingresa la operacion a realizar: ";
	cin>>opc;
	
	switch(opc)
	{
		case 1:
		compara_Alfa();
		break;
		
		case 2:
		compara_Long();
		break;
		
		case 3:
		mostrar();
		break;
		
		case 4:
		ato();
		break;
		
		case 5:
		atf();
		break;	
		
		case 6:
		palabra_minuscula();
		break;
		
		case 7:
		palabra_mayuscula();
		break;	
	}
	system("pause");
	system("cls");
}while(opc != 8);
	
	
	//cambia la cadena de caracteres a otra 
	//strcpy(nombre,palabra);
	//cout<<nombre<<endl;
	//sele asigna el valor a la cadena
	return 0;
}

