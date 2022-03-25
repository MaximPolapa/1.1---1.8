#pragma once
using namespace std;

class Combination
{
private:
	int first;
	int second;

public:
	int GetFirst() const { return first; }
	int GetSecond() const { return second; }
	void SetFirst(int value);
	void SetSecond(int value);

	bool Init(int k, int n);
	void Read();
	void Display() const;

	int combination() const;
	long long Factorial(long long n) const;
};

