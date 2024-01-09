#include <iostream>
#define SINIF_MEVCUDU 2

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Basit{
	int i;
	float f;
	public:
		Basit(int ,float);
		void deger(){
			cout<<i<<f;
		};
};
int main(int argc, char** argv) {
	Basit nsn(1,2.5);
	nsn.deger();
	return 0;
}
