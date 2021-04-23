#include<iostream>
using namespace std;

int main()
{  int x=0,n=0,i=1,j=1,t=0;  
    while(n<10001)  
    {  
        j=1;  
        x=0;  
        while(j<=i)  
        {  
            if(i%j==0)  
            x++;  
            j++;   
        }  
        if(x==2)  
        {            
            t++;
            n++;  
        }  
        i++;  
}   
cout<<i-1;
return 0;
}
