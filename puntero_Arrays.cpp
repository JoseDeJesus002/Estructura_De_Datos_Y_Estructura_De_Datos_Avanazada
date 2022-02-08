#include <iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int numeros[]={1,2,3,4,5};
	int *direcc;
	direcc = numeros;
	
	for(int i=0;i<5;i++){
		
		cout<<"Elemento en posicion I: "<<"["<<i<<"]"<<*direcc++<<endl;
	}
	
	for(int x=0;x<5;x++){
		cout<<"La posicion es: "<<numeros[x]<<direcc++<<endl;
	}
	getch();
	return 0;
}