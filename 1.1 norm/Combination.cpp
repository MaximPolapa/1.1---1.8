#include "Combination.h"
#include <iostream>
using namespace std;

void Combination::SetFirst(int value)
{
	first = value;
}

void Combination::SetSecond(int value)
{
	second = value;
}

bool Combination::Init(int k, int n){	first = k;	if (k >= 0)	{		if (n >= 0)		{			if (k < n)			{				second = n;				return true;			}			else			{				second = 0;				return false;			}		}		else		{			second = 0;			return false;		}	}	else	{		second = 0;		return false;	}}void Combination::Read(){	int k, n;	cout << "first ="; cin >> k;	do {		cout << "second ="; cin >> n;	} while (!Init(k, n));}int Combination::combination() const{	int N, k, n;	k = first;	n = second;	N = (Factorial(n)) / ((Factorial(n-k)*Factorial(k)));		return N;}void Combination::Display() const{	cout << "first:" << first << endl;	cout << "second:" << second << endl;}long long Combination::Factorial(long long n) const{	long long F = 1;
	for (int i = 1; i <= n; i++)
		F *= i;
	return F;}