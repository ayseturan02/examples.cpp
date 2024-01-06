#include <iostream>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL,"Turkish");       //turkce karakter
	int n,toplam=0;
	cout << "eleman sayisini girin:";
	cin >> n;
	int sayilar[n];
	for(int i=0; i<n; i++){
		sayilar[i]=1+rand()%99;
		toplam+=sayilar[i];
	}
	for(int i=0; i<n; i++){
		cout << sayilar[i]<<"\t";
	}
	cout <<endl << "sayilarin toplami:"<<toplam;
	return 0;
}
