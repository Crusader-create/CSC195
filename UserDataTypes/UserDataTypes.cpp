#include <iostream>

using namespace std;

void set(int& i)
{
	i = 123;
}

int main()
{
	int i1 = 10;
	int i2 = 20;

	int& r = i1;

	r = 30;
	set(i1);

	cout << "i1: " 
}