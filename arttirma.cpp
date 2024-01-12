#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int c=5; 
	cout << c << endl;  //5 yazdýr
	cout << c++ <<endl;   //5 yazdýr daha sonra arttýr
	cout << c << endl;    //6 yazdýr
	
	cout <<endl;
	
 	c=5;  
	cout << c << endl;    //5 yazdýr
	cout << ++c <<endl; //once arttýr daha sonra 6 yazdýr 
	cout << c << endl;   //6 yazdýr
	
	return 0;
}
