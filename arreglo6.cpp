#include<iostream>
using namespace std;

char juntar()
{
	char hola[9]={'H','o','l','a',' '};
	char mundo[]={'m','u','n','d','o'};
	
	for (int i=5;i<10;i++){
		hola[i]=mundo[i-5];
	}
	
	for (int i=0;i<10;i++){
		cout<<hola[i];
	}
}
int main()
{
	cout<<juntar();
	return 0;
}


