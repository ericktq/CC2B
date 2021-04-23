#include<iostream>
using namespace std;
int main()
{       
    int flag = 0;
    long int i=1;
    while( flag != 1)
        {
            for(int j=1; j <= 20; j++)
                {
                        if(i%j != 0)
                        {
                                flag=0;
                                break;
                        }
                        else
                                flag = 1;
                }

                i++;
        }
        cout << i-1 << "\n";       
}  
