#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL,"turkish");  // turkce karakter
	
	int sayilar[]={5,10,15,13,15,22,42};
	int buyuk=sayilar[0];
	int kucuk=sayilar[0];
	int n=sizeof(sayilar)/sizeof(sayilar[0]);
	for(int i=0; i<n; i++){
		if(sayilar[i]>buyuk)
		{
			buyuk=sayilar[i];
		}
		if(sayilar[i]<kucuk)
		{
			kucuk=sayilar[i];
		}
	}
	cout <<"en kucuk sayi:"<<kucuk << endl;
	cout <<"en buyuk sayi:"<<buyuk;
	return 0;
}
