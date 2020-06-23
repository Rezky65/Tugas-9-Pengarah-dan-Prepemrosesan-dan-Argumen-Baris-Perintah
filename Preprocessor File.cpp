#include <iostream>
#include <process.h>
using namespace std;

void ADD(int a, int b) 
{ 
	printf("Hasil Penjumlahan = %d\n", a + b); 
} 

void MULTIPLY(int a, int b) 
{ 
	printf("Hasil Perkalian = %d\n", a * b); 
} 
int main(){
	
	ADD(10,15);
	
	MULTIPLY(10, 15);
	
	cout<<"Proses Telah Selesai";
}
