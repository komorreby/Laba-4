
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

		cout << "1: �������� ����� ������." "\n"
			"2: �������� ������." "\n"
			"3: ������� ��� ������ � ������� ���������� ��������" "\n"
			"4: ������� ��������� �������." "\n"
			"5: ����� ������" "\n";
#if VER == 2

		cout << "6: ��������� � ����" "\n"
			"7: ������� �� �����" "\n";
#endif
				cout<<"8: ����� ""\n";
		cin >> a;

		system("cls");

		if (a == 1) {
			cout << "������� �������� ������" << endl;
			cin >> name;
			cout << "������� ����� ������" << endl;
			cin >> time;
			cout << "������� ���� �� �����" << endl;
			cin >> price;
			cout << "������� ���������� ��������" << endl;
			cin >> people;
			addInEnd(head, name, time, price, people);
		}
		else if (a == 2) {
			string N;

			cout << "������� �������� ������, ������� ����� ��������" << endl;
			cin >> N;
			cout << "������� �������� ������" << endl;
			cin >> name;
			cout << "������� ����� ������" << endl;
			cin >> time;
			cout << "������� ���� �� �����" << endl;
			cin >> price;
			cout << "������� ���������� ��������" << endl;
			cin >> people;
			edit(head, N, name, time, price, people);
		}
		else if (a == 3) {
			output(head);
		}
		else if (a == 4) {
			string N;
			cout << "������� �������� ������, ������� ����� �������" << endl;
			cin >> N;
			del(head, N);
		}
		else if (a == 5) {
			cout << "������� �������� ������, ������� ����� �����" << endl;
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