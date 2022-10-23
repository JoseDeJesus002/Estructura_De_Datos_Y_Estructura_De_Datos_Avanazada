#include <iostream>
#include <vector>
using namespace std;

//Funcion que divide el arreglo para poder orenar una mitad y luego la otra
void merge(vector<int>&arreglo,int inicio, int mitad, int final){
    int i,j,k;
    int elementosIzq = mitad - inicio + 1;
    int elementosDer = final - mitad;

    vector<int>izquierda(elementosIzq);
    vector<int>derecha(elementosDer);

    for(int i = 0; i < elementosIzq; i++){
        izquierda[i] = arreglo[inicio+i];
    }
    for(int j = 0; j < elementosDer; j++){
        derecha[j] = arreglo[mitad + 1 + j];
    }

    i = 0;
    j = 0;
    k = inicio;

    while(i < elementosIzq && j < elementosDer){
        if(izquierda[i] <= derecha[j]){
            arreglo[k] = izquierda[i];
            i++;
        }else{
            arreglo[k] = derecha[j];
            j++;
        }
        k++;
    }

    while(j < elementosDer){
        arreglo[k] = derecha[j];
        j++;
        k++;
    }

    while(i < elementosIzq){
        arreglo[k] = izquierda[i];
        i++;
        k++;
    }

}

//Funcion para ordenar el arreglo
void mergeSort(vector<int>&arreglo,int inicio, int final){
    if(inicio < final){
        int mitad = inicio + (final - inicio)/2;
        mergeSort(arreglo,inicio,mitad);
        mergeSort(arreglo,mitad+1,final);
        merge(arreglo,inicio,mitad,final);
    }
}
//Funcion de imprimir el arreglo 
void imprimirArreglo(vector<int>arreglo){
    for(int i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;
}


int main(){
	//Variables para el ingreo los datos
	int op;
	int x,y;
	vector<int> data;
	do{
	//Menu para decidir la funcion
	cout<<"Bienvenido Ingresa la longitud del arreglo y ingresa los datos"<<endl;
	cout<<"1. Ingreso de datos "<<endl;
    cout<<"2. Imprime el arreglo ordenado"<<endl;
	cout<<"3. Salir "<<endl;
	cout<<"Ingresa tu opcion: ";
	cin>>op;

    switch(op)
	{	
		case 1:
		cout<<"Ingresa la longitud: ";
		cin>>x;
		while(x > 0) {
    	int puntos;
    	cout<<"Ingresa los datos: ";
    	cin >> puntos;
    	data.push_back(puntos);
   		x = x - 1;
   		}
   		
		case 2: 
			cout<<"\n";
			cout<<"\n";
			//Imprime el arreglo
			imprimirArreglo(data);
			//Acciona la funcion de ordenar el arreglo
			mergeSort(data,0,data.size()-1); 
			system("pause");
			break;
		
		case 3: 
			cout<<"\nGracias por su preferencia vuelva pronto\n";
			system("pause");
			break;
	}
		system("cls");
	} while(op != 3);
    return 0;
}
    