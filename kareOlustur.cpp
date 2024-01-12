#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a;
	cout <<"karenin boyutunu giriniz:";
	cin >>a;
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			if(i==0 || i==a-1){
				cout <<"*";
			}
			else if(j==0 || j==a-1){
				cout<<"*";
			}
			else if(i==j || j==a-i-1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout <<endl;
	}
	return 0;
}
