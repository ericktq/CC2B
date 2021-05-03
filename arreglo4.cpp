#include<iostream>
#include<string.h>
using namespace std;


int tamano(){
	char palabra[]="hola";
	int tamano=0;
	
	tamano=strlen(palabra);
	return tamano;
}

int main(){
	
	cout<<tamano();
	return 0;
}
