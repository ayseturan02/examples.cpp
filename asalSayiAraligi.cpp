#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int asalsayi(int a){
	int kontrol=0;
	for(int b=2; b<a; b++){
		if(a%b==0){
			kontrol++;
		}
	}
		if((kontrol==0)&&(a>1)){
			cout<<a<<" asal sayidir";
		}
		else{
			cout<<a<<" asal degildir";
		}
		cout<<endl<<endl;
}
int asalsayisi(int a){
	int c,d=1;
	for(c=2; c<a; c++){
		if(a%c==0)
	d=0;
	}
	if(d==0)
	return 0;
	else 
	return 1;
}
int main(int argc, char** argv) {
	int x,sayac=0;
	cout<<"sayi giriniz:"<<endl;
	cin>>x;
	asalsayi(x);
	cout<<"2 ve 10000 arasindaki asal sayilar:"<<endl;
	for(int i=2; i<=10000; i++)
	{
		if(asalsayisi(i)==0){
			cout<<"";
		}
		else{
			cout<<i<<"\t";
				sayac++;
		}
	}
	cout<<endl;
	cout<<"2-10000 araliginda toplamda "<<sayac<<" tane asal sayi vardir."<<endl;
	return 0;
}

