#include<iostream>
using namespace std;

int sumarr(){
	const int tam=5;
	int numeros[]={1,2,3,4,5};
	int suma=0;
	
	for (int i=0;i<5;i++){
		suma += numeros[i];
	}
	return suma;
}

int main(){
	cout<<sumarr();
	return 0;
}
