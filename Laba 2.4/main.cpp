
#include<iostream>
#include<cstring>
#include <Windows.h>
#include <fstream>
#include "Struct.h"
#include "func.h"

#define VER 2

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	kino* head = NULL;
	kino* end = head;
	kino* ptr = head;

	string file;
	ifstream in; ofstream save;

	string name;
	string time;
	int price;
	int people;

	for (;;) {
		int a;

		cout << "1: Добавить новую строку." "\n"
			"2: Изменить данные." "\n"
			"3: Вывести все данные и среднее количество зрителей" "\n"
			"4: Удалить выбранный элемент." "\n"
			"5: Поиск фильма" "\n";
#if VER == 2

		cout << "6: Сохранить в файл" "\n"
			"7: Вывести из файла" "\n";
#endif
				cout<<"8: Выход ""\n";
		cin >> a;

		system("cls");

		if (a == 1) {
			cout << "Введите название фильма" << endl;
			cin >> name;
			cout << "Введите время сеанса" << endl;
			cin >> time;
			cout << "Введите цену за билет" << endl;
			cin >> price;
			cout << "Введите количество зрителей" << endl;
			cin >> people;
			addInEnd(head, name, time, price, people);
		}
		else if (a == 2) {
			string N;

			cout << "Введите название фильма, который нужно изменить" << endl;
			cin >> N;
			cout << "Введите название фильма" << endl;
			cin >> name;
			cout << "Введите время сеанса" << endl;
			cin >> time;
			cout << "Введите цену за билет" << endl;
			cin >> price;
			cout << "Введите количество зрителей" << endl;
			cin >> people;
			edit(head, N, name, time, price, people);
		}
		else if (a == 3) {
			output(head);
		}
		else if (a == 4) {
			string N;
			cout << "Введите название фильма, который нужно удалить" << endl;
			cin >> N;
			del(head, N);
		}
		else if (a == 5) {
			cout << "Введите название фильма, который нужно найти" << endl;
			cin >> name;
			find(head, name);
		}
#if VER==2
		else if (a == 6) {
			
			Save(ptr, head, file);

		}
		else if (a == 7) {
				
			Print(ptr, head, file);

		}
#endif
		else if (a == 8) {
				return 0;
		}
	}
};