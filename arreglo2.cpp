#include<iostream>
using namespace std;

int cambio(int n[])
{
	for(int i=4;i>=0;i--){
		cout<<" "<<n[i]; 
	}	
}

int main(){
	int number[] = {1,2,3,4,5};
	cambio(number);
}
