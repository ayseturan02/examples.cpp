#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int c=5; 
	cout << c << endl;  //5 yazd�r
	cout << c++ <<endl;   //5 yazd�r daha sonra artt�r
	cout << c << endl;    //6 yazd�r
	
	cout <<endl;
	
 	c=5;  
	cout << c << endl;    //5 yazd�r
	cout << ++c <<endl; //once artt�r daha sonra 6 yazd�r 
	cout << c << endl;   //6 yazd�r
	
	return 0;
}
