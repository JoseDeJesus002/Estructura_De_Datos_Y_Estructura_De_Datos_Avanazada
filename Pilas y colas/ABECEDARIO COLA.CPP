// programa: cola01.cpp
// un simple ejemplo del uso de la plantilla queue

#include <cstdlib>
#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char *argv[])
{
	queue<char> s;
	for (int i='A'; i <= 'Z'; i++)
	s.push(i);
while (! s.empty() )
	{
		cout << s.front() << " " ;
		s.pop();
	}
	
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
