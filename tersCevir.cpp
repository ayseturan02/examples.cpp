#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
	int terscevir(int a){
		int b,sayi=0;
		while(a!=0){
		b=a%10;
		sayi=sayi*10+b;
		a=a/10;	
	}
	cout<<"ters cevrilen sayi :"<<sayi<<endl;
}
int main(int argc, char** argv) {
	int n;
	cout<<"sayi giriniz:";
	cin>>n;
	terscevir(n);
	return 0;
}


