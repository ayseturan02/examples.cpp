#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int isPerfect(int a){
	int toplam=0;
	for(int b=1; b<a; b++){
		if(a%b==0){
			toplam=toplam+b;
		}
	}
	if(toplam==a){
		cout<<a<<" : mukemmel sayidir "<<endl;
	}
	
}
int main(int argc, char** argv) {
	cout<<"1 ile 1000 arasindaki mukemmel sayilar:"<<endl;
	for(int x=1; x<=1000; x++)
	 isPerfect(x);
	return 0;
}
