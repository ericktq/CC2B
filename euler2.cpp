#include<iostream>
using namespace std;
int main()
{
	unsigned long long int a=1,b=2;
	unsigned long long int sum = 0, i;

	for (i = 3;i=a+b, i <= 4000000; i++)
	{
		a = b;
		b = i;
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	cout << sum+2;
}
