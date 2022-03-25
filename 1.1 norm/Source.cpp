#include <iostream>
#include "Combination.h"
using namespace std;


int main()
{
	Combination l;
	l.Init(3, 8);
	l.Display();
	cout << l.combination()<<endl;

	Combination p;
	p.Read();
	p.Display();
	cout << "C(n,k)=" << p.combination() << endl;

	return 0;
}