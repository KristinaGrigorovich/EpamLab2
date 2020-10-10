// Lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <string>
#include <iostream>
using namespace std;

int k;
string s; 

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	
	cout << "Введите строку (ru):" << endl;
	getline(cin, s);
	k = 0;

	for (int i = s.length(); i--;)
	{
		if (s[i] == '*')
		{
			s.erase(i, 1);
			k++;
		}
	}

	cout << "Строка после удаления:" << endl;
	cout << s << endl;
	cout << "Количество удаленных символов: " << k << endl;

	return 0;


};
