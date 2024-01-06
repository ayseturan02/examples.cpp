#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int sayi=12345;
	int yedek;
	int yeni=0;
	yedek=sayi;
	cout<<"sayimiz: "<<sayi<<endl;
	while(sayi>0){
		yeni=yeni*10+sayi%10;
		sayi=sayi/10;
	}

	cout<<"sayinin tersi: "<<yeni<<endl;
	
	if(yedek==yeni)
	cout<<"palidrom:";
	else
	cout<<"palidrom degil:";
	
	return 0;
}
