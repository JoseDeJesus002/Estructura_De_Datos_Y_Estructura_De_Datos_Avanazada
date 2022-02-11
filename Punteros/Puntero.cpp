#include <iostream>
#include<conio.h>
using namespace std;
int main(){
int number,*direcc_number;

number=20;
direcc_number = &number;

cout<<"Numero: "<<*direcc_number<<endl;
cout<<"Direccion de memoria:"<<direcc_number<<endl;

getch();
return 0; 
}