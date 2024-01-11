#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Student{
	public:
		string name;
		void tellName(){
			cout << "benim adim "<< name << endl;
		}
};
int main(int argc, char** argv) {
	
	Student student1;
	Student student2;
	student1.name="ayse";
	student2.name="turan";
	student1.tellName();
	student2.tellName();

	
	
	return 0;
}
