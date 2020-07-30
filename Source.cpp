#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include "Dictionary.h"
using namespace std;

int main() {
	system("chcp 1251");

	ifstream in("words.txt");
	int choice;
	Dictionary d;
	string word, description;

	while (!in.eof()) {
		getline(in, word, '#');
		getline(in, description);
		d.add(word, description);
	}

	while (true) {
		cout << "1 - Добавление нового слова и его описания в словарь" << endl;
		cout << "2 - Поиск слова в словаре" << endl;
		cout << "3 - Удаление искомого слова с подтверждением" << endl;
		cout << "4 - Выдать все слова в словаре" << endl;
		cout << "0 для выхода из программы" << endl;
		cin >> choice;
		if (!choice) break;

		switch (choice)
		{case 1:
			cout << "Введите слово(словосочетание) и его описание в двух разных строках" << endl;
			cin.ignore();
			getline(cin, word);
			getline(cin, description);
			d.add(word, description);
			break;
		case 2:
			cout << "Введите искомое слово" << endl;
			cin.ignore();
			getline(cin, word);
			cout<<d.search(word)<<endl;
			break;
		case 3:
			cout << "Введите слово, которое хотите удалить" << endl;
			cin.ignore();
			getline(cin, word);
			d.remove(word);
			break;
		case 4: 
			d.print();
			break;

		default:
			cout << "Wrong case have choosen" << endl;
			break;
		}

	}

}