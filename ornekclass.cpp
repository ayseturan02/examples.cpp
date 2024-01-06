#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Dikdortgen{
	int en,boy;
	public:
		void ata(int e,int b){
			en=e;
			boy=b;
		}
	
	int alan(){
		return en*boy;
	}
};
int main(int argc, char** argv) {
	Dikdortgen x;     // x isimli bir nesne olusturalým.
	x.ata(5,2);
	cout<<x.alan()<<endl;
	return 0;
}
