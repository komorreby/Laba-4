//#include <iostream>
//using namespace std;
//
//int substraction(int a, int b, int n)
//{
//	if (n > 4 || n < 1)
//		throw "������������ ����� ��������";
//	if (b == 0 && n == 3)
//		throw "�� ���� ������ ������";
//
//switch (n)
//{
//case 1:
//	return a + b;
//	break;
//case 2:
//	return a - b;
//	break;
//case 3:
//	return a / b;
//
//	break;
//case 4:
//	return a * b;
//	break;
//};
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a, b, n;
//	while (true)
//	{
//		cout << "������� ������ �����: "; cin >> a;
//		cout << "������� ������ �����: "; cin >> b;
//		cout << "1 � ��������, 2 � ���������, 3 � �������, 4 - ���������: "; cin >> n;
//		try
//		{
//			int sub = substraction(a, b, n);
//			cout << sub << endl;
//		}
//		catch (const char* msg)
//		{
//			cout << msg << endl;
//		}
//	}
//	return 0;
//}