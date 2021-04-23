#include<iostream>
#include<vector>
long long int sum=0;
using namespace std;

void sumprimos()
{
for(int i=2;i<2000000;i++)
	{
		int n=1;
		for(int j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				n=0;
				break;
			}
		}
		if(n==1)
		{
                    sum+=i;
		}
	}
	cout<<sum;
}
int main()
{
	sumprimos();
}
