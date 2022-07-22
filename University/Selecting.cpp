#include "Header.h"

int choosenLine(string* items,int size) {
	bool* list = new bool[size] {0};
	int index = 0;
	char input = 0;
	enum key
	{
		ENTER = 13,
		UP = 72,
		DOWN = 80
	};
	while (true) {
		for (int i = 0; i < size; i++) {
			auto handle = GetStdHandle(STD_OUTPUT_HANDLE);
			if (list[i] == true)
				SetConsoleTextAttribute(handle, Green);
			cout << items[i] << endl;
			SetConsoleTextAttribute(handle, White);
		}
		input = _getch();
		if ((int)input == -32) {
			input = _getch();
			if ((int)input == UP) {
				index--;
				if (index == -1) {
					index = size - 1;
				}
			}
			else if (int(input) == DOWN) {
				index++;
				if (index == size) {
					index = 0;
				}
			}
			for (int i = 0; i < size; i++) {
				list[i] = false;
			}
			list[index] = true;
			system("cls");
		}
		else if ((int)input == ENTER) {
			return index;
		}
		else system("cls");
	}
}



