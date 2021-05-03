#include<iostream>
#include<string.h>

using namespace std;

char concatenar(){
	char cad1[]="Hola";
	char cad2[]=" mundo ";
	char cad3[30];
	
	strcpy(cad3,cad1);
	strcat(cad3,cad2);
	cout<<cad3<<endl;
}

int main(){
	cout<<concatenar();
	
	return 0;
}
