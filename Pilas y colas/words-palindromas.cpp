#include<iostream>
#include<stack>
#include<queue> 
#include<string>
#include<algorithm> 
using namespace std;

bool verificaPalindromo(string s){
    stack<char> pila;
    queue<char> cola;
    s.erase(remove(s.begin(),s.end(),' '),s.end()); //Elimina todos los espacios para que se vea como una palabra escrita
    for(int i=0 ; i < s.length() ; i++){ // se ingresa caracter por caracter y asi poder hacer la comparacion
            pila.push(s[i]);
            cola.push(s[i]);
        }
     for(int i=0 ; i < s.length() ; i++){
            if (pila.top() != cola.front()){ //hace una comparacion en cada 
                 return false; //Si encuentra diferencia se retorna a falso
        }
     pila.pop();
     cola.pop();
        }
    return true; //Si termina sin encontrar diferencia regresa verdadero
}

int main(){
    string s;
    cout<<"Ingrese la frase..."<<endl; 
    getline(cin, s); 
    if (verificaPalindromo(s)){
        cout<<s<<" es un palindromo"<<endl;
    } else {
        cout<<s<<" no es un palindromo..."<<endl;
    }
    return 0;
}