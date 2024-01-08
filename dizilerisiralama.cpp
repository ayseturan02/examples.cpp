#include <iostream>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	setlocale(LC_ALL,"Turkish");       //turkce karakter
	int temp;
	int dizi[]={5,10,13,15,15,22,42,21,99,4};
	for(int i=0; i<10-1; i++)
	for(int j=0; j<10-1; j++){
		if(dizi[j]>dizi[j+1]){
			temp=dizi[j];
			dizi[j]=dizi[j+1];
			dizi[j+1]=temp;
		}
	}
	for(int i=0; i<10; i++){
		cout << dizi[i] <<" ";
	}
	return 0;
}
