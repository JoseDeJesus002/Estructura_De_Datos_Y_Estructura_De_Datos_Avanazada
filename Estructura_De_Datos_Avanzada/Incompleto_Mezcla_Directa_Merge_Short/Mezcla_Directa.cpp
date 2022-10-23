//mezcla directa
//Instituto Tecnologico De Pochutla 
/*El siguiente programa muestra por método de ordenamiento por mezcla
directa, espero que les sea de gran ayuda.
El programa por si solo genera el vector para posteriormente ordenarlo,
desede luego hay que insertar el número de elementos de dichco vector
*/
#include<iostream>
#include<conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;
//se crean las funciones
void crearVector(int n,int *vector);
void imprimirVector(int n,int *vector);
void mezclaDirecta(int n,int *vector);
void mezclar(int n1,int *vec1,int n2,int *vec2,int *vector);

int main(int argc, char *argv[]){
	int *vec; // vector a ordenar
	int n; // tamaño del vector
	cout<<"\tGenerando vector...\n"<<endl;
	cout<<"\tCantidad de elementos: ";
	cin>>n;
	vec = new int[n];
	crearVector(n,vec);
	
	imprimirVector(n,vec);
	
	cout<<"\n\tOrdenando vector..."<<endl;
	mezclaDirecta(n,vec);
	imprimirVector(n,vec);
	cout<<"\n\tMetodo de mezcla directa terminado..."<<endl;
}

void crearVector(int n,int *vector){
	srand(time(NULL));
	for(int i=0;i<n;i++){
		vector[i]=rand()%100;
	}
}

void imprimirVector(int n,int *vector){
	cout<<"\n\t";
	for(int i=0;i<n;i++){
		cout<<"["<<vector[i]<<"] ";
	}
	cout<<endl;
}

void mezclaDirecta(int n,int *vector){
	int *v1,*v2; // vectores auxiliares
	int n1,n2; // tamaño de los vectores auxiliares
	int i,j; // contadores para recorrer los vectores
	if(n>1){
		if(n%2==0){
			n1 = n2 = n/2;
		}else{
			n2 = n/2;
			n1 = n2+1;
		}
		v1 = new int[n1];
		v2 = new int[n2];
		// separar el vector original en dos partes
		for(i=0;i<n1;i++){
			v1[i] = vector[i];
		}
		for(j=0;j<n2;i++,j++){
			v2[j] = vector[i];
		}
		mezclaDirecta(n1,v1);
		mezclaDirecta(n2,v2);
		mezclar(n1,v1,n2,v2,vector);
		
		// liberar el espacio de los vectores auxiliares
		delete v1;
		delete v2;
	}
}

void mezclar(int n1,int *vec1,int n2,int *vec2,int *vector){
	int c1 = 0,c2 = 0,c3 = 0; // variables para recorrer los vectores
	while(c1<n1&&c2<n2){
		if(vec1[c1]<vec2[c2]){
			vector[c3] = vec1[c1];
			c1++;
		}else{
			vector[c3] = vec2[c2];
			c2++;
		}
		c3++;
	}
	while(c1<n1){
		vector[c3] = vec1[c1];
		c1++;
		c3++;
	}
	while(c2<n2){
		vector[c3] = vec2[c2];
		c2++;
		c3++;
	}
}
