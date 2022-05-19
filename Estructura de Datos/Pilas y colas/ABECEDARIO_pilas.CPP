#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char *argv[]) {
	
	stack<string> s;
	int x;
	while(x!=3){
	cout<<"Ingresa la palabra: ";
	s.push(s);	
	}
		
	
	while (! s.empty() )
	{
		cout << s.top() << " " ;
		s.pop();
	}
	
	cout << endl;
	
	return 0;
}

