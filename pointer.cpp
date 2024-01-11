#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
//	int array[]={1,2,3,4};       // 1 2 3 .için 
	
//	cout << array    << endl;
//	cout << array +1 << endl;
//	cout << array +2 << endl;

	
//	int *ptr=array;
//	cout << ptr << endl;
//	ptr = ptr + 1;
//	cout << "pointerin yeni degeri :" <<ptr << endl;


//  int *ptr = &array[2];
//  cout << ptr << endl;

  string array[]={"ayse","turan"};
  string *ptr=array;
  cout << ptr + 1 << endl;
  cout << *(ptr + 1 ) << endl;
  cout << ptr[1] << endl;
  cout << array[3] << endl;
  
	
	return 0;
}
