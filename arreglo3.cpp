#include<iostream>
using namespace std;

int insercion(int n[] ){
	int i,pos,aux;
	
	for (i=0;i<5;i++){
		pos =i;
		aux=n[i];
		
		while((pos>0)&&(n[pos-1]>aux)){
			n[pos]=n[pos-1];
			pos--;
		}
			n[pos]=aux;
	}
	for(i=0;i<5;i++){
		cout<<n[i]<<" ";
	}
	
}
int main(){
	int numeros[]={4,2,3,1,5};
	insercion(numeros);
	
	return 0;
}
