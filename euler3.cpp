#include <iostream>
#include <math.h>
using namespace std;

bool isprime (unsigned long long n)
{
  for (unsigned long long i =2; i<sqrt(n)+1; i++)
  {
    if (n%i == 0)
      return(0);
  }
  return(1);
}

unsigned long long Maxprime (unsigned long long n)
{
    unsigned long long max=0;
    for (unsigned long long i=2;i<sqrt(n)+1 ;i++)
        {
            if (n%i ==0 && isprime(i) == 1 ) 
                 max = i;
        }
    return max;
}

int main()
{
unsigned long long number = 600851475143;
cout<<Maxprime(number)<<endl;
}
