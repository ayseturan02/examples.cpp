#include <iostream>
#define MAX_SIZE 100 
using namespace std;
 
int main(int argc, char** argv) {
	setlocale(LC_ALL,"Turkish");    //turkce karakter
	char text[MAX_SIZE];
    char * str = text;
    int sayac = 0;
 
    cout<<"Metni Gir: ";
    cin>>text;
 
    while(*(str++) != '\0') sayac++;
 
    cout<<text<<" uzunlugu: "<<sayac;
	return 0;
}

