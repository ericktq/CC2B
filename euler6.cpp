#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int sum1 = 0, sum2 = 0, sum;

	for (int i = 1; i <= 100; i++)
	{
		sum1 += pow(i, 2);
	}

	for (int i = 1; i <= 100; i++)
	{
		sum2 += i;
	}

	sum=pow(sum2, 2);
	cout << sum - sum1;
}
