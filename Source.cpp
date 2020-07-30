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
		cout << "1 - ���������� ������ ����� � ��� �������� � �������" << endl;
		cout << "2 - ����� ����� � �������" << endl;
		cout << "3 - �������� �������� ����� � ��������������" << endl;
		cout << "4 - ������ ��� ����� � �������" << endl;
		cout << "0 ��� ������ �� ���������" << endl;
		cin >> choice;
		if (!choice) break;

		switch (choice)
		{case 1:
			cout << "������� �����(��������������) � ��� �������� � ���� ������ �������" << endl;
			cin.ignore();
			getline(cin, word);
			getline(cin, description);
			d.add(word, description);
			break;
		case 2:
			cout << "������� ������� �����" << endl;
			cin.ignore();
			getline(cin, word);
			cout<<d.search(word)<<endl;
			break;
		case 3:
			cout << "������� �����, ������� ������ �������" << endl;
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