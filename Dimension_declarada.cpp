#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main(){
	cout<<"Bienvenido"<<"\n"<<"Digite los numeros para llenar la tabla (:"<<endl;
	cout<<"\n";
	int num [3][3];
	int i, j;
	
	//Va ingresando los datos a el vector
	for(i=0;i<3;i++){
		for (j=0;j<3;j++){
			cout<<"Digite un numero ["<<i<<"] ["<<j<<"]:";    
			cin>>num[i][j];
		}
	}
	
	cout<<"\n";
	cout<<"Matriz Normal"<<endl;
	cout<<"\n";
	
	//Se muestra en pantalla lo datos
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<num[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\n";
	cout<<"Matriz Modificada"<<endl;
	cout<<"\n";
	
	//Se hace el reemplazo de los datos a ceros en diagonal
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			num [0] [0]=0;
			num [1] [1]=0;
			num [2] [2]=0;
			cout<<num[i][j];
		}
		cout<<"\n";
	}	
	getch();
	return 0;
}