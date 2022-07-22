#include "Header.h"

int main() {
	University uni;
	addData(uni);
	cout << uni.getName() << endl;
	cout << uni.getUniversityScore() << endl;
	string* menu = new string[4]{ "Show All Student","Show All Teacher","Get Payment","About University" };
	int index = 0;
	while (true) {
		system("cls");
		index = choosenLine(menu, 4);
		system("cls");
		if (index == 0) {
			uni.showAllStudents();
			system("pause");
		}
		else if (index == 1) {
			uni.showAllTeacher();
			system("pause");
		}
		else if (index == 2) {
			uni.getPayment();
			system("pause");
		}
		else if (index == 3) {
			cout << "University's name: " << uni.getName() << endl;
			cout << "University's score: " << uni.getUniversityScore() << endl;
			system("pause");
		}
	}

}