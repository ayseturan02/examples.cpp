#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct Employee{
	int id;
	string name;
	string department;
};
void showEmployee(Employee employee){
	cout << "id :" << employee.id << endl;
	cout << "isim :" << employee.name << endl;
	cout << "departman:" << employee.department << endl;
}
int main(int argc, char** argv) {
	Employee employee1 = {12,"mustafa murat coskun","bilisim"};
	showEmployee(employee1);
	
	
		return 0;
}

