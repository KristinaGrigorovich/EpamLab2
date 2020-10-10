// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;


	string s;
	int k;
	int main()


{
	
	cout << "Введите строку (ENG):" << endl;
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
}

