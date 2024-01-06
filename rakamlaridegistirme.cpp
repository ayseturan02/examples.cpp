#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int a=5, b=10, temp;
	
	cout <<"ters cevrilmeden once:"<<endl;
	cout <<"a = " << a << " --- b= "<< b << endl;
	
	temp=a;
	a=b;
	b=temp;
	
	cout <<"\nters cevrildikten sonra "<< endl;
	cout <<"a = " << a <<" --- b = " << b << endl;
	
	 
	return 0;
}
