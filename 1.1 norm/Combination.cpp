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

bool Combination::Init(int k, int n)
	for (int i = 1; i <= n; i++)
		F *= i;
	return F;