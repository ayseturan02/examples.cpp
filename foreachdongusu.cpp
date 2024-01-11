#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
 	int a[]={10,20,30,40,50};
 	
/*	for(int i=0; i<5; i++){              // normal for
		cout << a[i] << endl;
	}
*/ 

 for(int item:a){        // item a dizisi uzerinde dolansin .
 cout << item << endl;         // << 2*item+5 << gibide yapýlabilir.
}
	
	
	return 0;
}


