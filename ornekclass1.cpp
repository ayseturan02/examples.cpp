#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Dikdorgen{
	int en,boy;
	public:
		Dikdorgen(int e,int b){  //constructor 
			en=e;
			boy=b;
		}
		int alan(){
			return en*boy;
		}
};
int main(int argc, char** argv) {
	Dikdorgen x(5,10);
	cout <<x.alan()<<endl;
	return 0;
}

/* constructor fonksiyonu nesne olusturuldugunda ýlk calýsacak fonksýyondur .
class ile ayný isimde olmak zorundadýr.*/

