#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Kisi{
	private: 
	    string adi;
	protected:
		string soyadi;
	public:
		static int nesneSayisi;
		Kisi(string a,string s){
			cout <<"nesne olusturuluyor ."<<endl;
			this->adi=a;
			(*this).soyadi=s;
			Kisi::nesneSayisi++;
		}
		string yazdir(){
			return this -> adi +" "+this->soyadi;
		}
		~Kisi(){
			cout << "nesne siliniyor ."<<endl;
		}
};
int main(int argc, char** argv) {
	Kisi *p;
	Kisi k1("ayse","turan");
	Kisi k2("ayse","turan");
	
	p=&k2;
	cout <<k1.yazdir()<<endl;
	cout <<p->yazdir()<<endl;
	
	cout <<"kopya sayisi:"<<Kisi::nesneSayisi<<endl;
	
	
	return 0;
}
